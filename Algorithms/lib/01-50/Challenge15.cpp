//=============================================
// 
// Lien Ly 
// 30 days of code - hackerrank.com
// 
// SumOf2Ints.cpp
//=============================================
#include "Challenge15.h"

int SumOf2Ints::getSum(int a, int b)
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