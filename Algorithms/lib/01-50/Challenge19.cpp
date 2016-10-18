//=====================================================================================
// 
// Lien Ly 
// Challenge from gameinstitute.com
// 
//-------------------------------------------------------------------------------------
// Description
// Build linked list class from scratch 
// 
//-------------------------------------------------------------------------------------
// Approaches
// ++ ------ Double Linked List ------ ++ 
// (0) Deconstructor: 
//			B/c in copy constructor and assignment operator, we allocate 
//			dynamic memory (mFirst; mLast), hence we need to delete them. 
// (1a) Copy constructor: 
//			Returns a separate copy of linked list (deep copy) 
// (1b) Empty constructor: 
//			Initialize all data members to NULL 
// (1c) Constructor takes vector<T> as parameter: 
//			Linked Lists' data members values equal vector elements' values 
// (2) Assignment operator overload: 
//			Similar to copy constructor (deep copy) 
// (3) isEmpty() 
//			Returns true if LinkedList is empty
// (4) getFirst()
//			Returns mFirst 
// (5) getLast() 
//			Returns mLast
// (6) insertFirst()
//			Insert new Linked Node to the first position in Linked List
// (7) insertLast()
//			Insert new Linked Node to the last position in Linked List
// (8) insertAfter()
//			Insert new Linked Node after a designated Node
// (9) removeFirst()
//			Remove first element 
// (10) removeLast() 
//			Remove last element 
// (11) remove() 
//			Remove designated element 
// (12) destroy() 
//			Delete the whole Linked List out of memory
//
// ++ ------ Single Linked List ------ ++ 
// (1) 
// 
// Challenge19.cpp - Linked List
//=====================================================================================
#include "Challenge19.h"
#include <iostream>

// Empty Linked List constructor
template<typename T>
LinkedList<T>::LinkedList()
{
	this->mFirst = 0; 
	this->mLast = 0; 
}

// Linked List constructor takes vector as parameter 
template<typename T>
LinkedList<T>::LinkedList(const std::vector<T>& input)
{
	int sz = input.size(); 
	
	DoubleLinkedNode<T> * prevNode = 0;
	DoubleLinkedNode<T> * current = 0;
	
	for (int i = 0; i < sz; i++) {
		current = new DoubleLinkedNode<T>();
		current->prev = prevNode; 
		current->data = input[i]; 

		if (i == 0) this->mFirst = current; 
		if (i == sz - 1) this->mLast = current; 

		if (prevNode) prevNode->next = current; 
		prevNode = current; 
		current->next = 0; 
		current = current->next; 
	}
}

// Linked List copy constructor 
template<typename T>
LinkedList<T>::LinkedList(const LinkedList & rhs)
{
	DoubleLinkedNode<T> * current = rhs.mFirst; 
	DoubleLinkedNode<T> * currentNew = 0; 
	DoubleLinkedNode<T> * prevNew = 0; 

	while (current) {
		currentNew = new DoubleLinkedNode<T>(); 
		// current = new SuperCuteLiney<T>()[] 10/17/2016 - cannot delete this line
		currentNew->data = current->data; 
		currentNew->prev = prevNew; 

		if (prevNew != 0) prevNew->next = currentNew; 
		else this->mFirst = currentNew; 

		prevNew = currentNew; 
		current = current->next; 
		if (!current) this->mLast = currentNew; 
	}
}

// Linked List destructor 
template<typename T>
LinkedList<T>::~LinkedList()
{
	if (this->mFirst != 0) {
		delete mFirst;
		mFirst = 0;
	}
	
	if (this->mLast != 0) {
		delete mLast;
		mLast = 0;
	}
}

// Overload assignment operator 
template<typename T>
LinkedList<T> & LinkedList<T>::operator=(const LinkedList & rhs)
{
	LinkedList<T> newLinkedList(rhs); 
	return newLinkedList;
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const LinkedList<T>& input)
{
	std::cout << "Forward Print: ";
	DoubleLinkedNode<T> * current = new DoubleLinkedNode<T>(); 
	current = input.mFirst; 

	while (current != 0) {
		std::cout << current->data << " "; 
		current = current->next; 
	}

	std::cout << std::endl; 

	// Print Linked List backwards 
	std::cout << "Backward Print: "; 
	current = input.mLast; 

	while (current != 0) {
		std::cout << current->data << " "; 
		current = current->prev; 
	}

	std::cout << std::endl;
	
	return os; 
}

// Check to see if Linked List is empty
template<typename T>
bool LinkedList<T>::isEmpty()
{
	if (mFirst) return false; 
	return true; 
}

// Get first Linked Node in Linked List
template<typename T>
DoubleLinkedNode<T> * LinkedList<T>::getFirst()
{
	if (this->mFirst) return this->mFirst;
	else return nullptr; 
}

// Get last Linked Node in Linked List
template<typename T>
DoubleLinkedNode<T> * LinkedList<T>::getLast()
{
	if (this->mLast) return this->mLast;
	else return nullptr;
}

// Insert 'T data' into the first position in Linked List
template<typename T>
void LinkedList<T>::insertFirst(T data)
{
	DoubleLinkedNode<T> * newNode = new DoubleLinkedNode<T>(); 
	newNode->data = data; 
	newNode->next = this->mFirst; 
	newNode->prev = 0; 

	this->mFirst->prev = newNode; 
	this->mFirst = newNode; 
}

// Insert 'T data' into the last position in Linked List
template<typename T>
void LinkedList<T>::insertLast(T data)
{
	DoubleLinkedNode<T> * newNode = new DoubleLinkedNode<T>(); 
	newNode->data = data; 
	newNode->next = 0; 
	newNode->prev = this->mLast; 

	this->mLast->next = newNode; 
	this->mLast = newNode; 
}

// Insert 'T data' after 'T key' 
template<typename T>
void LinkedList<T>::insertAfter(T tkey, T tdata)
{
	DoubleLinkedNode<T> * current = this->mFirst; 

	while (current->data != tkey) current = current->next; 

	if (current) {
		DoubleLinkedNode<T> * next = current->next; 

		DoubleLinkedNode<T> * newNode = new DoubleLinkedNode<T>(); 
		newNode->data = tdata; 
		newNode->prev = current; 
		if (next) newNode->next = next; 

		current->next = newNode; 
		if (next) next->prev = newNode; 
	}
}

// Remove first element in Linked List 
template<typename T>
void LinkedList<T>::removeFirst()
{
	DoubleLinkedNode<T> * current = this->mFirst; 
	if (current->next) this->mFirst = current->next; 
	else this->mFirst = 0; 

	if (this->mFirst) this->mFirst->prev = 0; 

	delete current; 
	current = 0; 
}

// Remove last element in Linked List 
template<typename T>
void LinkedList<T>::removeLast()
{
	DoubleLinkedNode<T> * current = this->mLast; 
	if (current->prev) this->mLast = current->prev; 
	else this->mLast = 0; 

	if (this->mLast) this->mLast->next = 0; 

	delete current; 
	current = 0; 
}

// Remove designated element in Linked List 
template<typename T>
void LinkedList<T>::remove(T removalLinkedNode)
{
	DoubleLinkedNode<T> * current = this->mFirst; 
	while (current->data != removalLinkedNode) current = current->next; 

	if (current) {
		DoubleLinkedNode<T> * prev = current->prev; 
		DoubleLinkedNode<T> * next = current->next; 

		if (prev) {
			if (next) prev->next = next; 
			else prev->next = 0; 
		}

		if (next) {
			if (prev) next->prev = prev; 
			else next->prev = 0; 
		}

		delete current; 
		current = 0; 
	}
}

// Destroy the whole Linked List
template<typename T>
void LinkedList<T>::destroy()
{
	if (this->mFirst) {
		DoubleLinkedNode<T> * current = this->mFirst; 

		while (current) {
			DoubleLinkedNode<T> * oldNode = current; 
			current = current->next; 

			delete oldNode; 
			oldNode = 0; 
		}
	}

	if (this->mFirst) this->mFirst = 0; 
	if (this->mLast) this->mLast = 0; 
}

// No need to call this TemporaryFunction() function,
// This is used to avoid template link error.
//void TemporaryFunction()
//{
//	std::vector<int> vector_temp = {};
//	LinkedList<int> ll_c19(vector_temp);
//}
