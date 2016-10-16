//=====================================================================================
// 
// Lien Ly 
// Challenge from firecode.io 
// 
//-------------------------------------------------------------------------------------
// Description
// Find the first Non Duplicate Character in a String
// 
// Challenge07.h - First None Duplicate
//=====================================================================================
#ifndef CHALLENGE07_H
#define CHALLENGE07_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Challenge07 {
public:
	// Constructors & Deconstructors
	Challenge07() {};
	~Challenge07() = default;

	// Methods
	char first_non_repeating(string str); 
};

#endif