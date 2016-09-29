#include "BinarySearch.h"
#include "math.h"

int BinarySearch::search(vector<int>& searchArray, int value, int left)
{
	int right, mid, n;

	n = searchArray.size();
	right = n - 1;
	mid = n / 2;
	while (left <= right) {

		// 		iterator++; 
		// 		if (iterator > log2(searchArray.size() + 1)) {
		// 			// In case 'value' is not in 'searchArray'
		// 			return -1; 
		// 		}

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
