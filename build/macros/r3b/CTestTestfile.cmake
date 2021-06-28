# CMake generated Testfile for 
# Source directory: /work/R3BRoot/macros/r3b
# Build directory: /work/R3BRoot/build/macros/r3b
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(run_gen_sim "/work/R3BRoot/build/macros/r3b/run_gen_sim.sh")
set_tests_properties(run_gen_sim PROPERTIES  PASS_REGULAR_EXPRESSION "TestPassed;All ok" TIMEOUT "300")
add_test(run_digi "/work/R3BRoot/build/macros/r3b/run_digi_test.sh")
set_tests_properties(run_digi PROPERTIES  PASS_REGULAR_EXPRESSION "Digitization successful" TIMEOUT "300")
add_test(run_aladin_digi "/work/R3BRoot/build/macros/r3b/run_aladin_digi_test.sh")
set_tests_properties(run_aladin_digi PROPERTIES  PASS_REGULAR_EXPRESSION "Digitization successful" TIMEOUT "300")
subdirs("califa")
subdirs("land")
