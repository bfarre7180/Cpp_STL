#include <my_lib/vector>
#include <gtest/gtest.h>
#include <string>

TEST(VectorTest, Constructor_Sets_Size) {
    my_lib::vector<int> vec1(5);
    my_lib::vector<double> vec2{1.0, 2.0, 3.0, 4.0};

    EXPECT_EQ(vec1.size(), 5);
    EXPECT_EQ(vec2.size(), 4);
}
/*
			//Element Access Member Functions
TEST(VectorTest, At_Mem_Func) {
//TODO
}
*/
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
/*
TEST(VectorTest, Front_Mem_Func) {
//TODO
}

TEST(VectorTest, Back_Mem_Func) {
	//TODO
}

TEST(VectorTest, Data_Mem_Func) {
	//TODO
}

			//Capacity Member Functions
TEST(VectorTest, Empty_Mem_Func) {
	//TODO
}

TEST(VectorTest, Size_Mem_Func) {
	//TODO
}


TEST(VectorTest, Max_Size_Mem_Func) {
	//TODO
}

TEST(VectorTest, Reserve_Mem_Func) {
	//TODO
}

TEST(VectorTest, Capacity_Mem_Func) {
	//TODO
}

TEST(VectorTest, Shrink_Mem_Func) {
	//TODO
}

			//Modifiers Member Functions

TEST(VectorTest, Clear_Mem_Func) {
	//TODO
}

TEST(VectorTest, Insert_Mem_Func) {
	//TODO
}

TEST(VectorTest, Insert_Range_Mem_Func) {
	//TODO
}

TEST(VectorTest, Emplace_Mem_Func) {
	//TODO
}

TEST(VectorTest, Erase_Mem_Func) {
	//TODO
}
*/
TEST(VectorTest, Push_Back_Mem_Func) {
    my_lib::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    my_lib::vector<int> expected{ 10, 20, 30 };
    EXPECT_EQ( vec, expected );

    my_lib::vector<int> vec1(10);
    my_lib::vector<std::string> vec2{ "str1", "str2", "str3", "str4" };

    my_lib::vector<int> expected1 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    my_lib::vector<std::string> expected2{ "str1", "str2", "str3", "str4" };

    EXPECT_EQ( vec1, expected1 );
    EXPECT_EQ( vec2, expected2 );
}
/*
TEST(VectorTest, Emplace_Back_Mem_Func) {
	//TODO
}

TEST(VectorTest, Append_Range_Mem_Func) {
	//TODO
}

TEST(VectorTest, Pop_Back_Mem_Func) {
	//TODO
}

TEST(VectorTest, Resize_Mem_Func) {
	//TODO
}

TEST(VectorTest, Swap_Mem_Func) {
	//TODO
}
*/
