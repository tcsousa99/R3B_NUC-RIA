# CMake generated Testfile for 
# Source directory: /work/R3BRoot/neuland/test/calibration
# Build directory: /work/R3BRoot/build/neuland/test/calibration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(NeulandQcal "/work/R3BRoot/build/neuland/test/calibration/testNeulandQcal.sh")
set_tests_properties(NeulandQcal PROPERTIES  PASS_REGULAR_EXPRESSION "Test successful!" TIMEOUT "100")
add_test(NeulandTcal "/work/R3BRoot/build/neuland/test/calibration/testNeulandTcal.sh")
set_tests_properties(NeulandTcal PROPERTIES  PASS_REGULAR_EXPRESSION "Test successful!" TIMEOUT "100")
