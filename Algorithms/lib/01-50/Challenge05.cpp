//=============================================
// 
// Lien Ly
// Challenge from leetcode.com 
// 
// CountBits.cpp
//=============================================
#include "Challenge05.h"

using namespace std; 

vector<int> CountBits::countBits(int num) {
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

string CountBits::toBinary(int num) {
	string binary = bitset<8>(num).to_string(); 

	return binary; 
}