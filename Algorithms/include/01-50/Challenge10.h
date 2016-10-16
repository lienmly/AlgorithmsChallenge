//=====================================================================================
//
// Lien Ly 
// Challenge from leetcode.com 
// 
//-------------------------------------------------------------------------------------
// Description
// Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.
//
// For example,
// If n = 4 and k = 2, a solution is :
// 
//[
//	[2, 4],
//	[3, 4],
//	[2, 3],
//	[1, 2],
//	[1, 3],
//	[1, 4],
//]
//
// Challenge10.h - Combinations
//=====================================================================================
#ifndef CHALLENGE10_H
#define CHALLENGE10_H

#include <vector> 

class Challenge10
{
public:
	// Constructors & Deconstructors
	Challenge10() {}
	~Challenge10() = default;

	// Methods
	std::vector<std::vector<int>> combine(int n, int k);
	void addElem(int n, int k, std::vector<int>& combine, std::vector<std::vector<int>>& result, int start);
};
#endif
