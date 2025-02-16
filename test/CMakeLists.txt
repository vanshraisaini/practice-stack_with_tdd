add_executable(run_tests
    test_stack.cpp
)

target_link_libraries(run_tests PRIVATE my_stack_lib)

# Link testing framework (e.g., GoogleTest, Catch2)
find_package(GTest REQUIRED)
target_link_libraries(run_tests PRIVATE GTest::GTest GTest::Main)

add_test(NAME MyStackTests COMMAND run_tests)
