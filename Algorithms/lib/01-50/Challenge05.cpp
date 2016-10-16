//=====================================================================================
// 
// Lien Ly
// Challenge from leetcode.com 
//
//-------------------------------------------------------------------------------------
// Description
// Given a non negative integer number num. For every numbers i in the range 
// 0 <= i <= num calculate the number of 1s in their binary representation and return 
// them as an array.
//
// For num = 5 => return [0,1,1,2,1,2].
// 
// Challenge05.cpp - Count Bits
//=====================================================================================
#include "Challenge05.h"

using namespace std; 

vector<int> Challenge05::countBits(int num) {
	vector<int> ret(num + 1, 0); // [num + 1] ints with value 0

	for (int i = 1; i <= num; ++i) {
		ret[i] = ret[i & (i - 1)] + 1;
		cout << "ret[" << i << "] = " << "ret[" << i << " & " << i - 1 << "] + 1 = ret[" <<
			toBinary(i) << " & " << toBinary(i + 1) << "] + 1 = ret[" 
			<< toBinary(i)  << " & " << toBinary(i + 1) << "] + 1 = " << ret[i & (i + 1)] + 1 << endl; 
	}
		
	cout << endl; 
	return ret;
}

string Challenge05::toBinary(int num) {
	string binary = bitset<8>(num).to_string(); 

	return binary; 
}