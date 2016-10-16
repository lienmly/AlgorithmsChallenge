//=====================================================================================
//
// Lien Ly
// Challenge from leetcode.com  
//
// Challenge02.cpp - Find max depth of Binary Tree
//=====================================================================================
#include "Challenge02.h"
#include<queue>

int Challenge02::maxDepth_Recursion(TreeNode * root)
{
	//===============================
	// Recursive method
	//===============================

	// Base case 
	if (!root) return 0;

	int leftDepth = maxDepth_Recursion(root->left);
	int rightDepth = maxDepth_Recursion(root->right);

	if (leftDepth > rightDepth) return 1 + leftDepth;
	else return 1 + rightDepth;
}

int Challenge02::maxDepth_Iterative(TreeNode * root)
{
	//===============================
	// Iterative method 
	// Breadth First Search
	//===============================
	 int depth = 0; 

	 if (!root)
	     return depth; 

	 queue<TreeNode*> level; 
	 level.push(root); 

	 while(!level.empty()){
	     depth++; 

	     int size = level.size(); 
	     for (int i = 0; i < size; i++){
	         TreeNode* node = level.front(); 
	         level.pop(); 

	         if (node->left)
	             level.push(node->left); 
	         if (node->right)
	             level.push(node->right); 
	     }
	 }
	 return depth; 
}
