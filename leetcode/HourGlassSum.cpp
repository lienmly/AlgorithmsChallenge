#include "HourGlassSum.h"

int HourGlassSum::findSum(int arr[6][6])
{
	int sz = 6;
	int maxSum = 0;
	int sum = 0; 
	for (int i = 0; i < sz - 2; i++) {
		for (int j = 0; j < sz - 2; j++) {
			sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
			if (sum > maxSum) maxSum = sum;
		}
	}
	if (sum > maxSum) maxSum = sum; 
	cout << maxSum << endl;
	return maxSum; 
}
