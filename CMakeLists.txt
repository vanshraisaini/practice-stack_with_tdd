cmake_minimum_required(VERSION 3.16)
project(my_stack)

# Add project source files
add_library(my_stack_lib
    src/stack.cpp
)

# Include directories for public headers
target_include_directories(my_stack_lib PUBLIC include)

# Add tests
enable_testing()
add_subdirectory(test)
