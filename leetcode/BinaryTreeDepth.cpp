#include "BinaryTreeDepth.h"

int BinaryTreeDepth::maxDepth(TreeNode * root)
{
	// base case 
	if (!root) return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);

	if (leftDepth > rightDepth) return 1 + leftDepth;
	else return 1 + rightDepth;


	//return 1 + (leftDepth>rightDepth?leftDepth:rightDepth);

	// int depth = 0; 

	// if (!root)
	//     return depth; 

	// queue<TreeNode*> level; 
	// level.push(root); 

	// while(!level.empty()){
	//     depth++; 

	//     int size = level.size(); 
	//     for (int i = 0; i < size; i++){
	//         TreeNode* node = level.front(); 
	//         level.pop(); 

	//         if (node->left)
	//             level.push(node->left); 
	//         if (node->right)
	//             level.push(node->right); 
	//     }
	// }
	// return depth; 
}
