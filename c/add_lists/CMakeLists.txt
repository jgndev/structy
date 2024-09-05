cmake_minimum_required(VERSION 3.29)
project(c_dsa_templ C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add your source files
add_library(solution STATIC src/solution.c include/solution.h)

# Add Unity from the vendor folder
add_library(unity STATIC vendor/unity.c vendor/unity.h)

# Add test executable
add_executable(test_solution test/test_solution.c)

# Link Unity and solution to the test executable
target_link_libraries(test_solution unity solution)

# Include directories
target_include_directories(test_solution PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor
)

# Add a custom target to run tests
add_custom_target(test
        COMMAND test_solution
        DEPENDS test_solution
)

