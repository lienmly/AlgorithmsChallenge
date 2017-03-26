#include "gtest\gtest.h"
#include "Challenge01.h"
#include "Challenge01.cpp"

// ----------------------------------------------------------------------
// Challenge01 - Binary Search
// ----------------------------------------------------------------------
TEST(testChallenge01, test01) {
	Challenge01 c01;
	vector<int> testVector = {-1000, -285, -99, -2, 1, 7, 88, 190, 200, 999};
	int result = c01.search(testVector, 88, 0);
	EXPECT_EQ(6, result); 
}
