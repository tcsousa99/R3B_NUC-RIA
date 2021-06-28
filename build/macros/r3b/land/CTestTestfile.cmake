# CMake generated Testfile for 
# Source directory: /work/R3BRoot/macros/r3b/land
# Build directory: /work/R3BRoot/build/macros/r3b/land
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(landreco "/work/R3BRoot/build/macros/r3b/land/run_test.sh")
set_tests_properties(landreco PROPERTIES  PASS_REGULAR_EXPRESSION "Reconstruction successful" TIMEOUT "300")
