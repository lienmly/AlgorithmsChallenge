//=====================================================================================
// 
// Lien Ly 
// Challenge from hackerrank.com 
// 
//-------------------------------------------------------------------------------------
// Description
// Sum of two Ints - 30 days of codes
// 
// Challenge15.cpp
//=====================================================================================
#include "Challenge15.h"

int Challenge15::getSum(int a, int b)
{
	int ret = a;
	int temp = 0;

	if (b >= 0)
		temp = b;
	else
		temp = -b;

	for (int i = 0; i < temp; i++) {
		if (b >= 0)
			ret++;
		else
			ret--;
	}
	return ret;
}
