# CMake generated Testfile for 
# Source directory: /work/R3BRoot/neuland/test
# Build directory: /work/R3BRoot/build/neuland/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(NeulandUnitTests "/work/R3BRoot/build/bin/NeulandUnitTests")
add_test(NeulandSimulation "/work/R3BRoot/build/neuland/test/testNeulandSimulation.sh")
set_tests_properties(NeulandSimulation PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "2000")
add_test(NeulandDigitizer "/work/R3BRoot/build/neuland/test/testNeulandDigitizer.sh")
set_tests_properties(NeulandDigitizer PROPERTIES  DEPENDS "NeulandSimulation" PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "1000")
add_test(NeulandTrain "/work/R3BRoot/build/neuland/test/testNeulandTrain.sh")
set_tests_properties(NeulandTrain PROPERTIES  DEPENDS "NeulandDigitizer" PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "1000")
add_test(NeulandReconstruction "/work/R3BRoot/build/neuland/test/testNeulandReconstruction.sh")
set_tests_properties(NeulandReconstruction PROPERTIES  DEPENDS "NeulandTrain" PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "1000")
subdirs("calibration")
