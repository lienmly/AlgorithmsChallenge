//======== leetcode problem No. 77 ===========
//
// leetcode.com solutions
// 
// Question: Combinations
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
//=============================================
#include "leetcode77.h"

std::vector<std::vector<int>> Solution::combine(int n, int k)
{
	std::vector<std::vector<int>> result;

	if (n == 0 || k == 0)
		return result;

	std::vector<int> combine;
	addElem(n, k, combine, result, 1);

	return result;
}

void Solution::addElem(int n, int k, std::vector<int>& combine, std::vector<std::vector<int>>& result, int start)
{

	// Base case 
	if (k == 0)
	{
		// Add the combinations into final result
		result.push_back(combine);
		return;
	}

	for (int i = start; i < n - k + 1; i++)
	{
		combine.push_back(i);
		addElem(n, k - 1, combine, result, i + 1);
		combine.pop_back();
	}
}