//=====================================================================================
// 
// Lien Ly
// Challenge from leetcode.com 
//
//-------------------------------------------------------------------------------------
// Description
// Given a non negative integer number num. For every numbers i in the range 
// 0 <= i <= num calculate the number of 1s in their binary representation and return 
// them as an array.
//
// For num = 5 => return [0,1,1,2,1,2].
// 
// Challenge05.h - Count Bits
//=====================================================================================
#ifndef CHALLENGE05_H
#define CHALLENGE05_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std; 

class Challenge05 {
public: 
	// Constructors & Deconstructors
	Challenge05() {}
	~Challenge05() = default;

	// Methods
	vector<int> countBits(int); 
private:
	// Methods
	string toBinary(int);
};

#endif
