#include "SelectionSort.h"

int * SelectionSort::selection_sort_array(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		int minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}

		int temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;

	}
	
	return arr;
}
