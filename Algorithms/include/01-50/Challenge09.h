//=====================================================================================
//
// Lien Ly 
// Challenge from leetcode.com 
// 
//-------------------------------------------------------------------------------------
// Description
// Given a roman numeral, convert it to an integer. Input is guaranteed to be within 
// the range from 1 to 3999.
// 
// Challenge09.h - Roman to Integer
//=====================================================================================
#ifndef CHALLENGE09_H
#define CHALLENGE09_H

#include <string> 

class Challenge09
{
public:
	// Constructors & Deconstructors
	Challenge09() {}
	~Challenge09() = default;

	// Methods
	int convertChar(char& c);
	int romanToInt(std::string s);
};

#endif