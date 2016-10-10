//=============================================
// 
// Lien Ly
// Challenge from leetcode.com - Given a non 
// negative integer number num. For every numbers 
// i in the range 0 <= i <= num calculate the 
// number of 1s in their binary representation 
// and return them as an array.
//
// For num = 5 => return [0,1,1,2,1,2].
// 
// CountBits.h
//=============================================
#ifndef COUNTBITS_H
#define COUNTBITS_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std; 

class CountBits {
public: 
	vector<int> countBits(int); 
private:
	string toBinary(int);
};

#endif
