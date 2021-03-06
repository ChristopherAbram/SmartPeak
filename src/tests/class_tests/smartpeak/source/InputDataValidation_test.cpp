// --------------------------------------------------------------------------
//   SmartPeak -- Fast and Accurate CE-, GC- and LC-MS(/MS) Data Processing
// --------------------------------------------------------------------------
// Copyright The SmartPeak Team -- Novo Nordisk Foundation 
// Center for Biosustainability, Technical University of Denmark 2018-2021.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL ANY OF THE AUTHORS OR THE CONTRIBUTING
// INSTITUTIONS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// --------------------------------------------------------------------------
// $Maintainer: Douglas McCloskey $
// $Authors: Douglas McCloskey $
// --------------------------------------------------------------------------

#include <SmartPeak/test_config.h>

#define BOOST_TEST_MODULE InputDataValidation test suite
#include <boost/test/included/unit_test.hpp>
#include <SmartPeak/io/InputDataValidation.h>
#include <SmartPeak/core/Filenames.h>
#include <SmartPeak/core/SequenceProcessor.h>

using namespace SmartPeak;
using namespace std;

const std::string main_dir = SMARTPEAK_GET_TEST_DATA_PATH("workflow_csv_files");

BOOST_AUTO_TEST_SUITE(inputdatavalidation)

BOOST_AUTO_TEST_CASE(fileExists)
{
  string pathname = SMARTPEAK_GET_TEST_DATA_PATH("OpenMSFile_standardsConcentrations_1.csv");
  BOOST_CHECK_EQUAL(InputDataValidation::fileExists(pathname), true);
  pathname = SMARTPEAK_GET_TEST_DATA_PATH("this_does_not_exist.csv");
  BOOST_CHECK_EQUAL(InputDataValidation::fileExists(pathname), false);
}

BOOST_AUTO_TEST_CASE(isValidFilename)
{
  string pathname = SMARTPEAK_GET_TEST_DATA_PATH("OpenMSFile_standardsConcentrations_1.csv");
  InputDataValidation::FilenameInfo v;
  v = InputDataValidation::isValidFilename(pathname, "some standards file");
  BOOST_CHECK_EQUAL(v.validity, InputDataValidation::FilenameInfo::valid);  // success
  pathname = SMARTPEAK_GET_TEST_DATA_PATH("this_does_not_exist.csv");
  v = InputDataValidation::isValidFilename(pathname, "a file that does not exist");
  BOOST_CHECK_EQUAL(v.validity, InputDataValidation::FilenameInfo::invalid); // failure
  pathname.clear();
  v = InputDataValidation::isValidFilename(pathname, "an empty pathname");
  BOOST_CHECK_EQUAL(v.validity, InputDataValidation::FilenameInfo::not_provided);  // not provided
}

BOOST_AUTO_TEST_CASE(validateNamesInStructures)
{
  const set<string> s1 = {"1", "2", "3"};
  const set<string> s2 = {"1", "2", "4"};
  const set<string> s3 = {"1", "2", "3", "4"};
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s1, s1, "", "", true), true); // check itself
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s1, s2, "", "", false), false); // s1 -> s2, "3" is missing
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s2, s1, "", "", false), false); // s1 -> s2, "4" is missing
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s2, s1, "", "", true), false); // s1 <-> s2, "3" and "4" are missing
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s1, s3, "", "", false), true); // s1 -> s3, no name is missing
  BOOST_CHECK_EQUAL(InputDataValidation::validateNamesInStructures(s1, s3, "", "", true), false); // s1 <-> s3, "4" is missing
}

BOOST_AUTO_TEST_CASE(findMissingNames)
{
  const set<string> s1 = {"1", "2", "3"};
  const set<string> s2 = {"1", "2", "4"};
  const set<string> s3 = {"1", "2", "3", "4"};
  set<string> result;

  result = InputDataValidation::findMissingNames(s1, s1);
  BOOST_CHECK_EQUAL(result.size(), 0);

  result = InputDataValidation::findMissingNames(s1, s2);
  BOOST_CHECK_EQUAL(result.size(), 1);
  BOOST_CHECK_EQUAL(result.count("3"), 1);

  result = InputDataValidation::findMissingNames(s2, s1);
  BOOST_CHECK_EQUAL(result.size(), 1);
  BOOST_CHECK_EQUAL(result.count("4"), 1);

  result = InputDataValidation::findMissingNames(s1, s3);
  BOOST_CHECK_EQUAL(result.size(), 0);

  result = InputDataValidation::findMissingNames(s3, s1);
  BOOST_CHECK_EQUAL(result.size(), 1);
  BOOST_CHECK_EQUAL(result.count("4"), 1);
}

BOOST_AUTO_TEST_CASE(sampleNamesAreConsistent)
{
  SequenceHandler sequenceHandler;
  Filenames filenames = Filenames::getDefaultStaticFilenames(main_dir);

  CreateSequence cs(sequenceHandler);
  cs.filenames_          = filenames;
  cs.delimiter          = ",";
  cs.checkConsistency   = false;
  cs.process();

  bool result;

  result = InputDataValidation::sampleNamesAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, true);

  filenames.sequence_csv_i = main_dir + "/sequence_missing.csv";
  sequenceHandler.clear();

  cs.filenames_ = filenames;
  cs.process();

  result = InputDataValidation::sampleNamesAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, false); // missing sample: fakeSample
}

BOOST_AUTO_TEST_CASE(componentNamesAreConsistent)
{
  SequenceHandler sequenceHandler;
  Filenames filenames = Filenames::getDefaultStaticFilenames(main_dir);

  CreateSequence cs(sequenceHandler);
  cs.filenames_          = filenames;
  cs.delimiter          = ",";
  cs.checkConsistency   = false;
  cs.process();

  bool result;

  result = InputDataValidation::componentNamesAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, true);

  filenames.traML_csv_i = main_dir + "/traML_missing.csv";
  // SequenceProcessor::createSequence(sequenceHandler, filenames, ",", false);
  RawDataHandler& rawData0 = sequenceHandler.getSequence().front().getRawData();
  LoadTransitions loadTransitions;
  loadTransitions.process(rawData0, {}, filenames);

  result = InputDataValidation::componentNamesAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, false);
}

BOOST_AUTO_TEST_CASE(componentNameGroupsAreConsistent)
{
  SequenceHandler sequenceHandler;
  Filenames filenames = Filenames::getDefaultStaticFilenames(main_dir);

  CreateSequence cs(sequenceHandler);
  cs.filenames_          = filenames;
  cs.delimiter          = ",";
  cs.checkConsistency   = false;
  cs.process();

  bool result;

  result = InputDataValidation::componentNameGroupsAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, true);

  filenames.traML_csv_i = main_dir + "/traML_missing.csv";
  //SequenceProcessor::createSequence(sequenceHandler, filenames, ",", false);
  RawDataHandler& rawData0 = sequenceHandler.getSequence().front().getRawData();
  LoadTransitions loadTransitions;
  loadTransitions.process(rawData0, {}, filenames);

  result = InputDataValidation::componentNameGroupsAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, false);
}

BOOST_AUTO_TEST_CASE(heavyComponentsAreConsistent)
{
  SequenceHandler sequenceHandler;
  Filenames filenames = Filenames::getDefaultStaticFilenames(main_dir);

  CreateSequence cs(sequenceHandler);
  cs.filenames_          = filenames;
  cs.delimiter          = ",";
  cs.checkConsistency   = false;
  cs.process();

  bool result;

  result = InputDataValidation::heavyComponentsAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, true);

  filenames.quantitationMethods_csv_i = main_dir + "/quantitationMethods_missing.csv";
  //SequenceProcessor::createSequence(sequenceHandler, filenames, ",", false);
  SequenceSegmentHandler& seqSeg0 = sequenceHandler.getSequenceSegments().front();
  LoadQuantitationMethods loadQuantitationMethods;
  loadQuantitationMethods.process(seqSeg0, SequenceHandler(), {}, filenames);

  result = InputDataValidation::heavyComponentsAreConsistent(sequenceHandler);
  BOOST_CHECK_EQUAL(result, false); // g6p.g6p_2.Heavy is missing
}

BOOST_AUTO_TEST_SUITE_END()
