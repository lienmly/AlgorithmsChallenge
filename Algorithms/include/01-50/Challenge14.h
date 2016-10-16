//=====================================================================================
// 
// Lien Ly 
// Basic C++ algorithm  
// 
// Challenge14.h - selection sort
//=====================================================================================
#ifndef CHALLENGE14_H
#define CHALLENGE14_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Challenge14 {
public:
	// Constructors & Deconstructors
	Challenge14() {}
	~Challenge14() = default;

	// Methods
	int* selection_sort_array(int arr[], int size); 
};

#endif