//=====================================================================================
// 
// Lien Ly 
// Challenge from firecode.io 
// 
//-------------------------------------------------------------------------------------
// Description
// Merge two sorted arrays 
// 
// Challenge12.cpp - Merge
//=====================================================================================
#include "Challenge12.h"

int * Challenge12::merge(int arr_left[], int sz_left, int arr_right[], int sz_right)
{
	int* arr_merged = new int[sz_left + sz_right];

	int leftIdx = 0;
	int rightIdx = 0;
	int mergeIdx = 0;

	while (leftIdx < sz_left || rightIdx < sz_right) {
		if (arr_left[leftIdx] < arr_right[rightIdx]) {
			arr_merged[mergeIdx] = arr_left[leftIdx];
			mergeIdx++;
			leftIdx++;
		}
		else {
			arr_merged[mergeIdx] = arr_right[rightIdx];
			mergeIdx++;
			rightIdx++;
		}
	}

	return arr_merged;
}
