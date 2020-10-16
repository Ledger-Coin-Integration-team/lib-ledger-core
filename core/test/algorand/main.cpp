#include <gtest/gtest.h>
#include "../integration/IntegrationEnvironment.h"
#include <cstdlib>

#ifdef _WIN32
# include <windows.h>
#endif

#ifdef _MSC_VER
# include <crtdbg.h>
#else
# define _CrtSetReportFile(a, b)
# define _CrtSetReportMode(a, b)
#endif

int main(int argc, char **argv) {
#ifdef _WIN32
  // Don't display any error dialogs. This also suppresses message boxes
  // on assertion failures in MinGW where _set_error_mode/CrtSetReportMode
  // doesn't help.
  SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX |
    SEM_NOOPENFILEERRORBOX);
#endif
  // Disable message boxes on assertion failures.
  _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG);
  _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
  _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG);
  _CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
  try {
    IntegrationEnvironment::initInstance(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
  } catch (...) {
    // Catch all exceptions to make Coverity happy.
  }
  return EXIT_FAILURE;
}