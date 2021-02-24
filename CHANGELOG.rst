SmartPeak Changelog
===================


v1.1.1 (2021-02-24)
-------------------

Features
~~~~~~~~
- [feat/aut819] Implement version bumper + Add script which returns
  version after bumping (dry mode) + Update utils.py file with
  bumped_version() function. [ChristopherAbram]
- [feat/aut819] Implement version bumper + Provide script for reading
  and updating smartpeak version from CMake configuration (smartpeak
  tool python package) + Provide scripts for bumping/setting smartpeak
  version from commit message + Update smartpeak version to the latest
  released. [ChristopherAbram]
- [feat/aut876] - Improvements/Changes to CI (#323) [Ahmed Khalil]

  * [CI] - switching builds to Release

  * [CI] - Fix for OpenMS contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build

  * [CI] - caching OpenMS::contrib_build
- [feat/aut834] Include/Pass version tag to SmartPeak code. (#320)
  [Krzysztof Abram, Krzysztof Jan Abram]

  + Add `Utilities::getSmartPeakVersion()` static method.
  + Include version information in GUI.cpp and logs.
- [feat/aut823] Add changelog for existing versions new: doc: Add
  changelog. [Krzysztof Abram]
- [feat/aut822] Description of the workflow steps displayed to the user
  (#321) [bertrandboudaud]

  * [feat/aut822] Description of the workflow steps displayed to the user

  * [feat/aut822] Fixed error handling. Fixed CalculateMDVAccuracies name

  * [feat/aut822] Use IProcessorDescription in ApplicationHandler

  * [feat/aut822] Disabled edition when workflow is running. Update application handler in main thread when workflow finished to run.

  * [feat/aut822] Fixed Compilation on Ubuntu
- [feat/aut168] Add test for ApplicationProcessor classes (#305)
  [Krzysztof Abram, Krzysztof Jan Abram]

  + Add tests for ApplicationProcessor
- [feat/aut169] Add getID, getName and getDescription to
  SequenceProcessor (#304) [Krzysztof Abram, Krzysztof Jan Abram]

  + Add IProcessorDescription interface,
  + Implement IProcessorDescription interface in SequenceProcessor classes,
  + Add unit tests for relevant SequenceProcessor's getters,
  + Processor classes implement interface IProcessorDescription,
  * Fix: Add missing impl of IProcessorDescription interface to LoadWorkflow and StoreWorkflow classes,
  * Fix: Correct method declaration in LoadSequenceWorkflow and StoreSequenceWorkflow
- [feat/aut175] Unit tests for CastValue (#316) [bertrandboudaud]

Fix
~~~
- Fix. [ChristopherAbram]
- [fix/aut887] Fix 'HPLC UV Unknowns' preset (#325) [bertrandboudaud]
- [fix/aut833] Add pattern for commit classification consistent with
  existing history (#319) [Krzysztof Abram, Krzysztof Jan Abram]

Other
~~~~~
- Release update (1.3.36) [skip ci] [ChristopherAbram]
- Release update (1.1.36) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Release update (1.1.35) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Release update (1.1.34) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Release update (1.1.33) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Release update (1.1.32) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Release update (1.1.31) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Update tools. [ChristopherAbram]
- Release update (1.1.27) [skip ci] [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Update shebang. [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Change shebang. [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- File permissions. [ChristopherAbram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Add first version of bash release script. [ChristopherAbram]
- [CI] - updating CI config. [Ahmed Khalil]
- [API] - setting FeatureMetadataSize dynamically. [Ahmed Khalil]
- [API] - updating SessionHandler_test for the new entries in
  metadataToString and metadataToString. [Ahmed Khalil]
- [API] - updating metadataToString and metadataToString with
  average_accuracy & absolute_difference. [Ahmed Khalil]
- Updated config.yml. [Krzysztof Abram]

Features
~~~~~~~~
- [feat/aut294] Log not written when GUI is launched from folder that
  requires Admin privileges to write to (#301) [Krzysztof Abram,
  Krzysztof Jan Abram]

  + Add static method SmartPeak::Utilities::getLogFilepath() for dynamic path to log,
  + Redirect logging path for GUI,
  + Handle errors and log message to console,
  + Add unit test for Utilities::getLogFilepath()
- [feat/aut680] refactor of handling user parameters (#302)
  [bertrandboudaud]

  * [feat/aut680] refactor of handling user parameters

  - Parameter do not use anymore map/vectors/maps, but ParameterSet, container of FunctionParameter, containers of Parameter.
  - It's still possible to initialize with the old structure of map/vector/map.
  - Parameter can be initialized from an OpenMS Parameter (to create the schema).
  - Parameter can be assigned to another Parameter, the schema, allowing validation.
  - Commands return the list of Parameter they need to run (getParameterSchema()), allowing validation when setting up the workflow, not when running it.
  - Parameter Panel show different colors: user overridden parameters, the default parameters (schema), and the unused (not appearing from the schema)
  - Parameter Panel colors invalid values in red. Mouse over it shows some indication: constraint, expected Type

  * [feat/aut680] fixed unreachable code

  * [feat/aut680] Fixed compilation issues on Ubuntu

  * [feat/aut680] Fixed Ubuntu compilation

  * [feat/aut680] fixed BOOST_REQUIRE

  * [feat/aut680] Added tests, set parameters for FIAMS, mZML, MergeInjections and PickMS1Features

  * [feat/aut680] fixed MacOS compilation

  * [feat/aut680] Fixed BOOST_CHECK compilation error

  * [feat/aut680] Merged support for isotropic labeling experiments

  * [feat/aut680] set default value for CalculateMDVs/feature_name to intensity

  * [feat/aut680] Added descriptions
- Feat/aut425 (#307) [bertrandboudaud]

  * [feat/aut425] Ability to save and load previous workflows

  * [feat/aut425] Moved commands to SequenceHandlers, remove the workflow modal dialog. Save/Load in menu.

  * [feat/aut425] removed unused format check

  * [feat/aut425] Improved error handling, avoid supplicate creations of commands

  * [feat/aut425] Use BuildCommandsFromNames, fixed const signed parameter.
- [feat/aut716] Implementation of SpectraPlotWidget, split Widgets in
  their own files. [Bertrand Boudaud]
- [feat/aut716] Fixed Chromatogram stops updating after having selected
  all plots. [Bertrand Boudaud]
- [Feat/aut510] - SmartPeak support for isotopic labeling experiments
  (#283) [Ahmed Khalil]

  * C++17 filesystem : adding getFolderContents(...) member function

  * C++17 filesystem : adding sorting features to getFolderContents(...)

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem

  * C++17 filesystem : testing transition to std::filesystem - removing Findboost.cmake

  * Doc : Updating README with instructions related to building OpenMS and SmartPeak with a recent boost version and C++17

  * Support for Isotopic Labeling Experiemnts : updating RawDataProcessor structs

  * C++17 filesystem : fixing single entries not shown w/ file Picker

  * Support for Isotopic labeling Experiments : adding relevant process methods

  * TEMPORARY FIX : locking ImGui version to a hosted version of ImGui

  * Support for IsotopeLabeingMDVs : switching to feat/aut509 OpenMS

  * support for isotopic labeling experiments : adding tests for OpenMS::calculateMDVs(...)

  * support for isotopic labeling experiments : adding tests for IsotopicCorrections, CalculateIsotopicPurities and CalculateMDVAccuracies in SmartPeak

  * support for isotopic labeling experiments : premerging minor changes

  * support for isotopic labeling experiments : premerging minor changes

  * support for isotopic labeling experiments : premerging minor changes - removing std::filesystem

  * support for isotopic labeling experiments : premerging minor changes - switching to OpenMS feat/aut509

  * support for isotopic labeling experiments : premerging minor changes - switching to OpenMS feat/aut509

  * support for isotopic labeling experiments : minor changes

  * support for isotopic labeling experiments: parsing isotopic_purity_values from a dedicated field

  * adding param for CalculateMDVAccuracies

  * finalising SmartPeak support for isotopic labeling experiments

  * switching to OpenMS/OpenMS.git

  * minor changes to CI

  * minor fix

  * updating Utilities_test

  * updating TRAML file with SumFormula

  * updating basic licence

  * updating README with current VS version and library releases based on CI scripts

  * updating Authors and Maintainers

  * updating RawDataProcessor with modified OpenMS::IsotopeLabelingMDVs

  * switching to feat/aut509 ~/ahmedskhalil/OpenMS.git

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * debugging RawDataProcessor_test

  * switching to OpenMS/OpenMS.git:develop

  * [CI] - fixing errors with plog/Log.h not found

  * [CI] - removing unused OpenMS repos

  * [CI] - minor updates to config file
- Feat/aut700 - Advanced plotting (#298) [bertrandboudaud]

  * [feat/aut700] Advance plotting

  - Fixed Sliders
  - Disable/Enable legend
  - Lines and scatter use same colors
  - More stability to display while running workflow (not fully tested)
  - Sliders along with legend checkbox are now part of the chromatogram widget

  * [feat/aut700] Added compact view

  * [feat/aut700] Added tests for resetChromatogramRange and resetSpectrumRange
- [feat/aut177] Allow for resizing the GUI bottom, left and upper panes
  (#297) [bertrandboudaud]
- [Feat/aut537] - Code Signing (#296) [Ahmed Khalil]

  * signing SmartPeak with DTU-issued certificate

  * signing SmartPeak with DTU-issued certificate

  * signing SmartPeak with DTU-issued certificate

  * signing SmartPeak with DTU-issued certificate

  * minor change

  * minor change

  * minor change

  * minor change

  * minor change

  * minor change

  * minor change

  * using specific signtool version

  * testing cert

  * testing cert

  * signing with machine store store cert.
- Feat: MergeFeatures (#295) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: refactored SearchAccurateMass into two methods for searching the accurate mass and the other for making the consensus features from the individual adducts

  * fix: updated ignore and removed build folders

  * fix, tests: updated MakeConsensusFeatures

  * fix: changed weighted average to sum in MakeConsensusFeatures

  * fix, tests: changed FeatureMap creation step of Search accurate mass to make subordinates instead of features for compatibility with downstream quantitation and filtering

  * fix: renamed MakeConsensusFeatures to MergeFeatures and updated the FIA-MS default workflow

  * fix, tests: updated MergeInjections to set the subordinate even merging at the Feature level

  * CI: updated to directories

  * CI: updates to cmake and find modules for imgui

  * fix: bug in git ignore and replacement with the current imgui

  * fix: revert changes to ci config

  * tests: updated utilities_test
- Feat: AUT662 (#288) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: bug in acquisition_date_time parsing format and order

  * feat, tests: added Xcalibur writer to sequence parser

  * feat, tests:  added new application processor for XCalibur

  * feat: added exporter to GUI and removed previously generated sequences in examples data
- [Feat/aut587] - Migrate all ImGui::columns to ImGui::tables in the GUI
  (#286) [Ahmed Khalil]

  * Switching to imgui v1.79, Boost to 1.73

  * updating CI configs

  * minor updates to ImGui tables

  * reverting minor changes

  * various adjustments to the current ImGui tables API

  * removing std directive for 14

  * hooking to fixated ImGui commit, updated FilePicker to updated ImGui API

  * resolving fatal error: reference is not a tree when checking out ImGui's specific commit

  * updating to latest ImGui::tables

  * ImGui::Tables : minor changes to FilePicker

  * ImGui::Tables - removing inner borders in FilePicker
- Feat: AUT201 (#287) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * feat: added makeSequenceFileMasshunter and tests

  * fix, feat: fixed bug in directory and added to the gui export menu
- Feat: AUT201 (#285) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * feat, tests: added method for making and writing an analyst sequence file along with tests

  * feat: added exporter to the GUI

  * tests: reversed year and day

  * refactor: changed member naming convention in SequenceProcessor classes

  * fix, refactor: changed filenames to use an explicit param for the mzML filename using the filename member of the raw data metadata

  * fix, tests: changed sequenceParser to insert the injection name if no original filename value is provided

  * tests: fixed SequenceProcessor test

  * fix: updates to broken tests due to refactors

  * fix: updates to example sequence templates

  * fix: update to SequenceParser to reflect change in filenaming semantics for mzML
- [Feat/aut586] - Updated ImGui::Tables API (#281) [Ahmed Khalil]

  * Updated ImGui::Tables API

  * appending a missing include for OpenSwathAlgo

  * appending a missing include for OpenSwathAlgo - typo fix

  * appending a missing include for OpenSwathAlgo - fixes

  * appending a missing include for OpenSwathAlgo - fixes

  * appending a missing include for OpenSwathAlgo - fixes

  * appending a missing include for OpenSwathAlgo - removing unused cmake module for boost

  * appending a missing include for OpenSwathAlgo - switching to contrib_build boost

  * appending a missing include for OpenSwathAlgo - using hosted version of boost

  * updating GUI to latest ImGui API tables

  * integrating ImGui in SmartPeak - ImGui v.:f3184b82b0a709e045bb09e00fa4be81311bae9c - Superbuild for ImGui is disabled

  * integrating ImGui in SmartPeak - ImGui v.:f3184b82b0a709e045bb09e00fa4be81311bae9c - Superbuild for ImGui is disabled - updating CI superbuild directories

  * integrating ImGui in SmartPeak - ImGui v.:f3184b82b0a709e045bb09e00fa4be81311bae9c - Superbuild for ImGui is disabled - updating CI superbuild directories

  * integrating ImGui in SmartPeak - ImGui v.:f3184b82b0a709e045bb09e00fa4be81311bae9c - Superbuild for ImGui is disabled - updating CI superbuild directories

  * removing unused CI mod

Fix
~~~
- [fix/aut816] Fixed chromatogram and spectra range reset when selecting
  different components. (#314) [bertrandboudaud]
- [fix/aut809] - File name not shown when selected (#312) [Ahmed Khalil,
  Bertrand Boudaud]

  * [UI] - displaying selected file name in the designated field & adding double-click-to-open feature

  * [fix/aut809] Add possibility to create new file from FilePicker
- FIX: extra warnings in FIA-MS workflow (#311) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: small bug in FIA-MS pre-set workflow

  * fix: reverted WorflowManager changes

  * fix: MT issue in Workflow

  * fix: added extra logging to warn the user when the extract_spectra step for FIA-MS fails due to missing the RT that the spectra was acquired

  * fix: suggestions from deepCode
- Fix/RevertWMChanges (#310) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: reverted local copies of method arguments in WorkflowManager

  * fix: moved local copy of arguments to before run and join step
- Workflow preset (#309) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: small bug in FIA-MS pre-set workflow
- [fix/aut680] Fixed Compilation issue with Commands, set LoadRawData
  parameter constraint to "ChromeleonFile" instead of "Chromeleon"
  (#308) [bertrandboudaud]
- FIX: exception handling in QuantitationMethods (#306) [Douglas
  McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: added additional exception to catch misc OpenMS exceptions that interupt the workflow

  * fix: added additional exception to catch misc OpenMS exceptions that interupt the workflow

  * fix, ci: removed code signing section on windows
- Load features (#294) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix, tests: added addition of filename to featureMap when loading the featureMap
- FIX: migration to AutoFlowResearch (#293) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix, build: renamed SmartPeak2 to SmartPeak

  * CI: rebuild
- Aut651 (#291) [Ahmed Khalil, Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: changed racked code to match ideosyncrocy in numbers less than 10

  * fix: removed tmp file

  * specifying cmake version -> 3.17.2
- Aut651 (#289) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: replaced sample_name with injection_name in Analyst conversion
- Bug in HPLC data processing (#284) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: artificially scale the chromatograms when loading HPLC data derived from a .txt file

  * tests: updated RawDataProcessor

  * fix: updated the examples for HPLC
- Small/minor aesthetic fix to tables (#282) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: small updates to GenericTables

  * fix: removed column lines
- SequenceSegmentProcess exporters (#280) [Douglas McCloskey]

  * fix: prioritized the use of subordinate metadata when choosing between feature level and subordinate level

  * fix: changed ...csv_i to ...csv_o in all export methods

  * fix, tests: updated Estimation methods to use filter templates as the template

  * fix: bad values copy in EstimateFeaturesRSD

  * fix: added extra debug info to SelectFeatures

  * fix, tests: added sections in Filename for new store/load pairs in sequenceSegmentProcessor

  * feat, tests: added new store/load pairs to sequenceSegmentProcessor for estimations of RSDs and Background

  * fix: updated SharedProcessors with new sequenceSegmentProcessor store/load pairs

  * fix: bad GC-MS full scan workflow presets

  * feat, tests: added views for filter and qc tables to the SessionHandler

  * feat: added new tables to the GUI

  * ci: specified tables version

  * ci: specified tables version

  * ci: specified tables version

  * ci: specified tables version

Other
~~~~~
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Updated config.yml. [Krzysztof Abram]
- Refactor initialization of shared pointers. [Krzysztof Abram]


v1.1a (2020-08-30)
------------------

New
~~~
- Add support for computing more accurate peak area metrics that will be used for downstream analysis and filtering in FIA-MS to pickms1features.
- Add consensus calculations to `SearchAccurateMass`.
- Add support for sample group handler in add sample to sequence.
- Add `SampleGroupProcessor`.
- Add `MergeInjections` with test for the case of subordinates.
- Add option to record the convex hull during `PickMS1Features`.
- Add hull points and best left/right widths to `PickMS1Features`.
- Add support for spectra explorer.
- Support for plotting spectra and additional support for defining the ranges of chromatograms and spectra as well as plotting features wtihout raw data and vice versa.
- Example data and preliminary code for FIA-MS workflow.
- Add documentation for ReadtheDocs with Sphinx/Doxygen.
- Working NSIS setup but it is missing all of the dependency libraries and executables.
- Implement `SequenceProcessorMultithread`.
- Top and bottom windows follow host's window resize.'
- Integrate recent changes from AppWindow to GUI: Changes to AppWindow were lost after the AppWindow files removal.
- Ask for pathnames before running workflow.
- Implement class `WorkflowManager`: workflow is copied back to the main app.
- Clear FilePicker's filter on entering a directory.
- Implement Info tab functionality, related to QuickInfo menu.
- Add widget Report to store a csv file with FeatureSummary or SequenceSummary.

Changes
~~~~~~~
- Update FIAMS parameters and TraML templates.
- Packaging for macOS (dmg), Linux (deb), Windows (exe), CI for macOS and CI for Windows.
- Add support for feature level feature table and matrix reporting along with optimization of feature table and feature matrix updating in the GUI.
- Update `PickMS1Features` and `SearchAccurateMass` so that all necessary feature metadata needed for downstream filtering, QC, and analytics is captured in the `FeatureMap` and saved to the `FeatureMapHistory`.

Fix
~~~
- Prioritize the use of subordinate metadata when choosing between feature level and subordinate level.
- Expand `MergeInjections` tests and isolated/corrected several bugs.
- Major bugs in `SampleGroupProcessor`; Add `makeFeatureMapFromHistory` for better handling of input FeatureXML files.
- Bug in `UpdateFEatureMapHistory`.
- Bug in `mergeInjections` where missing injection data caused the feature to be removed prematurely.
- Bug in `FeatureMatrix`.
- Bug in filtering by injection name or sequence segment name.
- Add options for running sequence processor with specified injections or segments.
- EMG processor and app state fixes.
- About window not using a popup/modal because it relies on hacks/workarounds.


v1.0a (2020-07-16)
------------------

New
~~~
- GUI can load a session from a sequence.
- Implement processor `LoadSessionFromSequence`.
- Add `FilePicker`
- Add `AppStateProcessor` logic to `FilePicker`
- `getPathnameContent` uses class Table, fetches name, size, type and date of entries
- File type filter.
- Navigate directories, show their content.
- Add `AppState` to `AppWindow`.
- Drag and Drop steps.
- Add Workflow widget to the application.
- Add processor class `BuildCommandsFromIds` to `AppStateProcessor`.
- Use single-pane navigation.
- Add "go up" directory button.
- Do not insert "." and ".." to folder content.
- Navigate directories, show their content.
- Add to gui: `Report`, `Run workflow`.
- Add validation check on Report checkboxes. At least one of both column should be selected.
- Add widget `Report` to store a csv file with `FeatureSummary` or `SequenceSummary`.
- Add Workflow widget to the application.
- Implement class `GuiAppender`.
- CLI and pivot export.
- Load files in a separate thread, and disable buttons until it's done.
- Add `EMGProcessor`.
- Add in features line and heatmap plots.
- Feature explorer pane.
- CLI can export integration start/end for FeatureSummary.csv and SequenceSummary.csv.

Changes
~~~~~~~
- Install dependency `libboost-filesystem-dev` apt package.
- Improve `AppStateProcessor` hierarchy, remove unnecessary structs, make them private methods.
- `AppStateProcessor`'s methods become structs/classes.
- Separate CLI functionalities into `AppState` and `AppStateProcessor`.
- `AppState` does not keep info about selected metadata and sample types.
- Simplify CLI menu entries.

Fix
~~~
- Implicit conversion from char to `plog::util::nstring`.
- Indentation in `AppWindow::HelpMarker()`.
- Avoid shadowing menu item with text below/under (level, z-index wise) it in workflow steps. Use Button instead of Text.
- `FilePicker` does not call OpenPopup at every frame.
- Add support for OpenMS shared data and removing fixed path names.
- Enable selecting all metadata in CLI app,
- Main arguments in GUI.
- Cmake configuration for OpenGL (Linux).
- CommandLine: reset fetures and raw data directories after loading a new sequence file.


v0.1.0 (2019-04-08)
-------------------

First release of SmartPeak
