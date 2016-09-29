
#ifndef SOLUTION_H_INCLUDED
#define SOLUTION_H_INCLUDED

#include <vector> 

class Solution
{
public:
	std::vector<std::vector<int>> combine(int n, int k);
	void addElem(int n, int k, std::vector<int>& combine, std::vector<std::vector<int>>& result, int start);
};
#endif
