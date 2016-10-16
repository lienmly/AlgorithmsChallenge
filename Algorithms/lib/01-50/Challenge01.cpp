//======== Basic Class in C++ =================
//
// Lien Ly
// C++ Basic Algorithm
//
// BinarySearch.cpp
//=============================================
#include "Challenge01.h"
#include "math.h"

int Challenge01::search(vector<int>& searchArray, int value, int left)
{
	int right, mid, n;

	n = searchArray.size();
	right = n - 1;
	mid = n / 2;
	while (left <= right) {
		if (value > searchArray[mid])
			left = mid + 1;
		else if (value < searchArray[mid])
			right = mid - 1;
		else
			return mid;

		mid = (left + right) / 2;
	}
	return -1;
}
