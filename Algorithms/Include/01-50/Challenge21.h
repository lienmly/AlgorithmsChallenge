//=====================================================================================
// 
// Lien Ly 
// 
//-------------------------------------------------------------------------------------
// Description
// Build binary search tree class from scratch 
// 
// Challenge21.h - Binary Search Tree
//=====================================================================================
#ifndef CHALLENGE21_H
#define CHALLENGE21_H

template <typename T> 
struct TreeNode {
	T value; 
	TreeNode* left; 
	TreeNode* right; 
};

template <typename T>
class BinarySearchTree {
public:
	// Constructors
	BinarySearchTree(); 
	BinarySearchTree(const vector<T>&); 
	// Default copy constructor only implement shallow copy 
	// => needs to overload to acquire deep copy  
	BinarySearchTree(const BinarySearchTree& rhs);

	// Destructor
	~BinarySearchTree();

	// Overload operators
	BinarySearchTree& operator=(const BinarySearchTree& rhs);

	template <typename T>
	friend std::ostream& operator<<(std::ostream&, const BinarySearchTree<T>&);
private:
};

#endif