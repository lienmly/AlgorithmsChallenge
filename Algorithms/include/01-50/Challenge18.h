//=====================================================================================
// 
// Lien Ly 
// Challenge from leetcode.com
// 
//-------------------------------------------------------------------------------------
// Description
// Take 2 strings of numbers as input, return the sum of 2 ints, but in string from. 
// 
// Challenge18.h - Find 2 string sum
//=====================================================================================
#ifndef CHALLENGE18_H
#define CHALLENGE18_H

#include <string>

using namespace std;

class Challenge18 {
public:
	// Constructors & Deconstructors
	Challenge18() {}
	~Challenge18() = default;

	// Methods
	string sumOfTwoStrings_stl(string, string); 
	string sumOfTwoStrings_Nostl(string, string);
private: 
	// Methods
	int stringToInt(string); 
	string IntToString(int);
};

#endif