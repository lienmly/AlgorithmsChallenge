//=====================================================================================
// 
// Lien Ly 
// Challenge from firecode.io 
// 
//-------------------------------------------------------------------------------------
// Description
// Merge two sorted arrays 
// 
// Challenge12.h - Merge
//=====================================================================================
#ifndef CHALLENGE12_H
#define CHALLENGE12_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Challenge12 {
public:
	// Constructors & Deconstructors
	Challenge12() {}
	~Challenge12() = default;

	// Methods
	int* merge(int arr_left[], int sz_left, int arr_right[], int sz_right); 
};

#endif