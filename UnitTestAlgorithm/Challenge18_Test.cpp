#include "gtest\gtest.h"
#include "Challenge18.h"
#include "Challenge18.cpp"

// ----------------------------------------------------------------------
// Challenge18 - Find sum of 2 strings => return a string 
// ----------------------------------------------------------------------
TEST(testChallenge18, test01) {
	Challenge18 c18;
	string result_c18 = c18.sumOfTwoStrings_stl("123", "456");
	EXPECT_EQ("579", result_c18);
}

TEST(testChallenge18, test02) {
	Challenge18 c18;
	string result_c18 = c18.sumOfTwoStrings_Nostl("123", "234");
	EXPECT_EQ("357", result_c18);
}