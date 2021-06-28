# CMake generated Testfile for 
# Source directory: /work/R3BRoot/macros/r3b/califa
# Build directory: /work/R3BRoot/build/macros/r3b/califa
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(califasim2 "/work/R3BRoot/build/macros/r3b/califa/runsim.sh")
set_tests_properties(califasim2 PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
