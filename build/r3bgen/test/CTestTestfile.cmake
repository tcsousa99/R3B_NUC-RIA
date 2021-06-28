# CMake generated Testfile for 
# Source directory: /work/R3BRoot/r3bgen/test
# Build directory: /work/R3BRoot/build/r3bgen/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(testR3BPhaseSpaceGeneratorIntegration "/work/R3BRoot/build/r3bgen/test/testR3BPhaseSpaceGeneratorIntegration.sh")
set_tests_properties(testR3BPhaseSpaceGeneratorIntegration PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "100")
