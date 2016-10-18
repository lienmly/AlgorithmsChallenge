#include "Challenge18.h"
//=====================================================================================
// 
// Lien Ly 
// Challenge from leetcode.com
// 
//-------------------------------------------------------------------------------------
// Description
// Take 2 strings of numbers as input, return the sum of 2 ints, but in string from. 
// 
//-------------------------------------------------------------------------------------
// Approaches
// -- Use C++11 feature std::stoi(str) instead of atoi( str.c_str() ) to convert 
// str => int; std::to_string to convert int => string
//
// -- Does not use standard library: 
//		+ Convert string to int: 
//			Decimal 48 == character '0' in ASCII table
//		+ Convert int to string: 
//			Use the same strategy as above 
//
// Challenge18.cpp - Find 2 string sum
//=====================================================================================
#include "Challenge18.h"
#include <vector>

// Convert using standard library
string Challenge18::sumOfTwoStrings_stl(string input1, string input2)
{
	int num1 = stoi(input1);
	int num2 = stoi(input2); 

	return to_string(num1 + num2);
}

// Convert not using standard library
string Challenge18::sumOfTwoStrings_Nostl(string input1, string input2)
{
	int output1 = stringToInt(input1); 
	int output2 = stringToInt(input2); 

	return IntToString(output1 + output2);
}

// Helper functions 
int Challenge18::stringToInt(string input)
{
	int output = 0; 
	for (int i = 0; i < input.size(); i++) {
		output = output * 10 + (input[i] - '0'); 
	}

	return output;
}

string Challenge18::IntToString(int input)
{
	vector<char> digit = {}; 
	string ret = ""; 
	while (input != 0) {
		digit.push_back(input % 10 + '0');
		input = input / 10; 
	}

	for (int i = digit.size() - 1; i >= 0; i--) {
		ret += digit[i]; 
	}

	return ret;
}
