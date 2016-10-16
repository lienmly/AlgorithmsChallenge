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
//-------------------------------------------------------------------------------------
// Approaches
// Bruteforce: Nested loop through array takes O(n^2)
// Speed up: Use hash table takes O(n)
// 
// Challenge11.cpp - Contains Duplicate
//=====================================================================================
#include "Challenge11.h"
#include <unordered_map>
#include <cmath> 

bool Challenge11::containsNearbyDuplicate_bruteforce(std::vector<int>& nums, int k)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j< nums.size(); j++)
		{
			if (nums[i] == nums[j] && i != j && std::abs(i - j) <= k)
				return true;
		}
	}
	return false;
}

bool Challenge11::containsNearbyDuplicate_fast(std::vector<int>& nums, int k)
{
	std::unordered_map<int, int> check;
	for (int i = 0; i < nums.size(); i++)
	{
		// Fill up hash table until nums[i] = nums[j]
		if (check.find(nums[i]) == check.end())
		{
			check[nums[i]] = i;
			continue;
		}

		// Return when i - j <= k
		if (i - check[nums[i]] <= k)
			return true;

		// Keep filling up hash table when i - j > k 
		check[nums[i]] = i;
	}
	return false;
}