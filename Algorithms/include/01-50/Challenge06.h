//=====================================================================================
// 
// Lien Ly 
// Challenge from hackerrank.com 
//
//-------------------------------------------------------------------------------------
// Description
// Given an array of stock prices in a month. Stock can only be sold before bought again. 
// How should stock be sold and bought to gain maximum profit? 
//
// Challenge06.h - Stock Price (Dynamic Programming) 
//=====================================================================================
#ifndef CHALLENGE06_H
#define CHALLENGE06_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Challenge06 {
public:
	// Constructors & Deconstructors
	Challenge06() {}
	~Challenge06() = default;

	// Methods
	int maxProfit(vector<int>&); 
};

#endif
