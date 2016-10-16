//=====================================================================================
//
// Lien Ly 
// Challenge from leetcode.com 
// 
//-------------------------------------------------------------------------------------
// Description
// Given an array of integers and an integer k, find out whether there there are two 
// distinct indices i and j in the array such that nums[i] = nums[j] and the difference 
// between i and j is at most k.
// 
// Challenge11.h - Contains Duplicate
//=====================================================================================
#ifndef CHALLENGE11_H
#define CHALLENGE11_H

#include <vector> 

class Challenge11
{
public:
	// Constructors & Deconstructors
	Challenge11() {}
	~Challenge11() = default;

	// Methods
	bool containsNearbyDuplicate_bruteforce(std::vector<int>& nums, int k);
	bool containsNearbyDuplicate_fast(std::vector<int>& nums, int k);
};
#endif