//=====================================================================================
// 
// Lien Ly
// Challenge from leetcode.com 
// 
//-------------------------------------------------------------------------------------
// Description 
// Find max number of consecutive ones in a decimal's binary form 
//
// Challenge04.cpp - Consecutive Ones
//=====================================================================================
#include "Challenge04.h"

int Challenge04::findConsecutiveOnes(int n)
{
	int num = n;
	vector<int> temp = {};

	while (num > 0) {
		temp.push_back(num % 2);
		num = num / 2;
	}
	temp.push_back(num % 2); 

	int sz = temp.size();
	int counter = 0;
	int maxCount = 0; 

	for (int i = sz - 1; i >= 0; i--) {
		if (temp[i] == 1) counter++;
		else {
			if (counter > maxCount) maxCount = counter;
			cout << maxCount << " "; 
			counter = 0;
		}
	}

	if (counter > maxCount) maxCount = counter; 
	cout << endl;
	return maxCount; 
}
