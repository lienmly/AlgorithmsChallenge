//=====================================================================================
//
// Lien Ly
// Challenge from leetcode.com  
//
// Challenge02.h - Find max depth of Binary Tree
//=====================================================================================
#ifndef CHALLENGE02_H
#define CHALLENGE02_H

#include <iostream>
#include <string>

using namespace std;

class Challenge02 {
public:
	// Constructors & Deconstructors
	Challenge02() {}
	~Challenge02() = default;

	// Members
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

	// Methods
	int maxDepth_Recursion(TreeNode* root);
	int maxDepth_Iterative(TreeNode* root);
private:
};

#endif