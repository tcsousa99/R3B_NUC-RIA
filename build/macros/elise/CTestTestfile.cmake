# CMake generated Testfile for 
# Source directory: /work/R3BRoot/macros/elise
# Build directory: /work/R3BRoot/build/macros/elise
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(elsim "/work/R3BRoot/build/macros/elise/elsim.sh")
set_tests_properties(elsim PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
