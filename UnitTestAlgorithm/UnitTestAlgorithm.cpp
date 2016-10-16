#include <gtest\gtest.h>
#include "Challenge07.h"
#include "Challenge07.cpp"

TEST(testChallenge01, test01) {
	Challenge07 c07;
	string test_c07 = "aaaa";
	char result_c07 = c07.first_non_repeating(test_c07);
	EXPECT_EQ('0', result_c07);
}

int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}

