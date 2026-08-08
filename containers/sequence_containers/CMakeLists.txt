add_library(high_performance_lib INTERFACE)

target_include_directories(
    high_performance_lib
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(
    sequence_tests
    tests/vec.cc
    #tests/arr.cc
    #tests/deq.cc
    #tests/forw_list.cc
    #tests/hive_test.cc
    #tests/inpl_vec.cc
    #tests/list_test.cc
)

target_link_libraries(
    sequence_tests
    PRIVATE
        high_performance_lib
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(sequence_tests)