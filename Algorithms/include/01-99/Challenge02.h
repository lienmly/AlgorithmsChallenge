//======== Binary Tree Depth =================
//
// Lien Ly
// Challenge from leetcode.com - Find depth of 
// Binary Tree 
//
// BinaryTreeDepth.h
//=============================================
#ifndef BINARYTREEDEPTH_H
#define BINARYTREEDEPTH_H

#include <iostream>
#include <string>

using namespace std;

class BinaryTreeDepth {
public:
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

	int maxDepth(TreeNode* root);
private:
};

#endif