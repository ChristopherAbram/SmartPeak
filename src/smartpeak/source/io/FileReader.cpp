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
// $Authors: Douglas McCloskey, Pasquale Domenico Colaianni $
// --------------------------------------------------------------------------

#include <SmartPeak/io/FileReader.h>
#ifndef CSV_IO_NO_THREAD
#define CSV_IO_NO_THREAD
#endif
#include <SmartPeak/io/csv.h>
#include <SmartPeak/io/InputDataValidation.h>
#include <SmartPeak/core/RawDataProcessor.h>
#include <SmartPeak/core/Parameters.h>

namespace SmartPeak
{
  void FileReader::parseOpenMSParams(
    const std::string& filename,
    ParameterSet& parameters
  )
  {
    const std::string s_function {"function"};
    const std::string s_name {"name"};
    const std::string s_value {"value"};
    const std::string s_used {"used_"};
    const std::string s_type {"type"};
    const std::string s_tags {"tags"};
    const std::string s_description {"description"};
    const std::string s_comment {"comment_"};

    parameters.clear();

    io::CSVReader<
      8,
      io::trim_chars<' ', '\t'>,
      io::double_quote_escape<',', '\"'>, // io::no_quote_escape<','>, // io::double_quote_escape<',', '\"'>,
      io::no_comment // io::single_line_comment<'#'>
    > in(filename);

    in.read_header(
      io::ignore_extra_column | io::ignore_missing_column,
      s_function,
      s_name,
      s_value,
      s_used,
      s_type,        // optional
      s_tags,        // optional
      s_description, // optional
      s_comment      // optional
    );
    if (!in.has_column(s_used)
        || !in.has_column(s_function)
        || !in.has_column(s_name)
        || !in.has_column(s_value))
    {
      throw "Missing required column.";
    }
    const bool has_type = in.has_column(s_type);
    const bool has_tags = in.has_column(s_tags);
    const bool has_description = in.has_column(s_description);
    const bool has_comment = in.has_column(s_comment);
    std::string function;
    std::string name;
    std::string value;
    std::string used;
    std::string type;
    std::string tags;
    std::string description;
    std::string comment;
    while (in.read_row(function, name, value, used, type, tags, description, comment)) {
      std::transform(used.begin(), used.end(), used.begin(), ::tolower);
      if (used == "false")
        continue;
      std::map<std::string, std::string> properties =
      {
        {"name", name},
        {"value", value},
        {"used", used},
        {"type", type},
        {"tags", tags},
        {"description", description},
        {"comment", comment}
      };
      auto p = Parameter(properties);
      parameters.addParameter(function, p);
    }
  }
}
