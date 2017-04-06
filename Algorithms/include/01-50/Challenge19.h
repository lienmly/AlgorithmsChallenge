//=====================================================================================
// 
// Lien Ly 
// Challenge from gameinstitute.com
// 
//-------------------------------------------------------------------------------------
// Description
// Build linked list class from scratch 
// 
// Challenge19.h - Linked List
//=====================================================================================
#ifndef CHALLENGE19_H
#define CHALLENGE19_H

#include <vector> 

template <typename T> 
struct DoubleLinkedNode {
	T data;
	DoubleLinkedNode* next;
	DoubleLinkedNode* prev;
};

template <typename T>
struct SingleLinkedNode {
	T data;
	SingleLinkedNode* next;
};

template <typename T> 
class LinkedList {
public:
	// Constructors
	LinkedList(); 
	LinkedList(const std::vector<T>&); 
	// Default copy constructor only implement shallow copy 
	// => needs to overload to acquire deep copy  
	LinkedList(const LinkedList& rhs); 

	// Destructor
	~LinkedList();

	// Overload operators
	LinkedList& operator=(const LinkedList& rhs); 

	template <typename T>
	friend std::ostream& operator<<(std::ostream&, const LinkedList<T>&); 

	// Methods 
	bool isEmpty(); 
	DoubleLinkedNode<T> * getFirst(); 
	DoubleLinkedNode<T> * getLast(); 

	void insertFirst(T data); 
	void insertLast(T data); 
	void insertAfter(T tkey, T tdata); 
	void removeFirst(); 
	void removeLast(); 
	void remove(T removalLinkedNode); 
	void destroy(); 
private:
	// Members
	DoubleLinkedNode<T> * mFirst; 
	DoubleLinkedNode<T> * mLast; 
};
// 1 of solutoins to template linker error
// #include "Challenge19.cpp"

#endif