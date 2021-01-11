cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests.out customer-test.cxx)
target_link_libraries(executeTests.out ${GTEST_LIBRARIES} pthread)
add_executable(Tests.out billing-test.cxx)
target_link_libraries(Tests.out ${GTEST_LIBRARIES} pthread)
