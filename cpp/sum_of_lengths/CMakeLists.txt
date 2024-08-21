cmake_minimum_required(VERSION 3.28)
project(lc_cpp_template)

set(CMAKE_CXX_STANDARD 17)

# Find Google Test package
find_package(GTest REQUIRED)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the solution library
add_library(
        solution
        src/solution.cpp
        include/solution.h
)
target_include_directories(solution PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Enable testing
enable_testing()

# Add the test executable
add_executable(
        test_solution
        test/test_solution.cpp
        include/solution.h
)

# Link the test executable with Google Test and the solution library
target_link_libraries(test_solution GTest::GTest GTest::Main solution)

# Add the test
add_test(NAME SolutionTest COMMAND test_solution)
