#include <my_lib/vector>
#include <gtest/gtest.h>
#include <string>

TEST(VectorTest, Constructor_Sets_Size) {
    my_lib::vector<int> vec1(5);
    my_lib::vector<double> vec2{1.0, 2.0, 3.0, 4.0};

    EXPECT_EQ(vec1.size(), 5);
    EXPECT_EQ(vec2.size(), 4);
}

TEST(VectorTest, Element_Access) {
    my_lib::vector<int> vec1(5);
    my_lib::vector<double> vec2{1.0, 2.0, 3.0, 4.0};

    vec1[0] = 10;
    vec1[1] = 2;

    vec2[0] = 99.9;

    EXPECT_EQ(vec1[0], 10);
    EXPECT_EQ(vec1[1], 2);
    EXPECT_EQ(vec2[0], 99.9);
    EXPECT_EQ(vec2[1], 2.0);
}

TEST(VectorTest, Push_Back) {
    my_lib::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    EXPECT_EQ( vec, my_lib::vector<int>{ 10, 20, 30 } );

    my_lib::vector<int> vec1(10);
    my_lib::vector<std::string> vec2{ "str1", "str2", "str3", "str4" };

    EXPECT_EQ( vec1, my_lib::vector<int>{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } );
    EXPECT_EQ( vec2, my_lib::vector<std::string>{ "str1", "str2", "str3", "str4" } );
}