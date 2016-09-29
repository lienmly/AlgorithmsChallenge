// CountBits.h
#ifndef COUNTBITS_H
#define COUNTBITS_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std; 

class CountBits {
public: 
	vector<int> countBits(int); 
private:
	string toBinary(int);
};

#endif
