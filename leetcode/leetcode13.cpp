//======== leetcode problem No. 13 ============
//
// leetcode.com solutions
// 
// Question: Roman to Integer
// Given a roman numeral, convert it to an integer.
// Input is guaranteed to be within the range from 1 to 3999.
// 
//=============================================
#include "leetcode13.h"
#include <iostream> 

int Solution::convertChar(char& c)
{
	switch (c)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	}
}

int Solution::romanToInt(std::string s)
{
	int result = 0;
	for (int i = 0; i < s.size() - 1; ++i)
	{

		if (s[i + 1] && convertChar(s[i]) < convertChar(s[i + 1]))
			result -= convertChar(s[i]);
		else
			result += convertChar(s[i]);
	}

	result += convertChar(s[s.size() - 1]);
	return result;
}