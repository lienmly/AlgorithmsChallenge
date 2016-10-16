#include "gtest\gtest.h"
#include "Challenge07.h"
#include "Challenge07.cpp"

// ----------------------------------------------------------------------
// Challenge07 - Find the First Non Duplicate Character in a String
// ----------------------------------------------------------------------
TEST(testChallenge07, test01) {
	Challenge07 c07;
	string test_c07 = "aaaa";
	char result_c07 = c07.first_non_repeating(test_c07);
	EXPECT_EQ('0', result_c07);
}
