#include "gtest\gtest.h"
#include "Challenge01.h"
#include "Challenge01.cpp"

// ----------------------------------------------------------------------
// Challenge01 - Binary Search
// ----------------------------------------------------------------------
TEST(testChallenge01, HandleExistingValues) {
	Challenge01 c01;
	vector<int> testVector = {-1000, -285, -99, -2, 1, 7, 88, 190, 200, 999};
	EXPECT_EQ(0, c01.search(testVector, -1000, 0));
	EXPECT_EQ(6, c01.search(testVector, 88, 0));
	EXPECT_EQ(1, c01.search(testVector, -285, 0));
	EXPECT_EQ(9, c01.search(testVector, 999, 0));
}

TEST(testChallenge01, HandleNonExistingValues) {
	Challenge01 c01;
	vector<int> testVector = { -1000, -285, -99, -2, 1, 7, 88, 190, 200, 999 };
	EXPECT_EQ(-1, c01.search(testVector, 1000, 0));
	EXPECT_EQ(-1, c01.search(testVector, 72, 0));
	EXPECT_EQ(-1, c01.search(testVector, -5000, 0));
	EXPECT_EQ(-1, c01.search(testVector, 800, 0));
}

TEST(testChallenge01, HandleEmptyVector) {
	Challenge01 c01;
	vector<int> testVector = {};
	EXPECT_EQ(-1, c01.search(testVector, -2, 0));
	EXPECT_EQ(-1, c01.search(testVector, 999, 0));
	EXPECT_EQ(-1, c01.search(testVector, -5000, 0));
	EXPECT_EQ(-1, c01.search(testVector, 800, 0));
}