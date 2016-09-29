#ifndef SOLUTION_H_INCLUDED
#define SOLUTION_H_INCLUDED

#include <vector> 

class Solution
{
public:
	bool containsNearbyDuplicate_bruteforce(std::vector<int>& nums, int k);
	bool containsNearbyDuplicate_fast(std::vector<int>& nums, int k);
};
#endif