//=====================================================================================
// 
// Lien Ly 
// Challenge from hackerrank.com 
// 
//-------------------------------------------------------------------------------------
// Description
// Merge and sort intervals
// 
// Challenge13.h - Merge Intervals
//=====================================================================================
#ifndef CHALLENGE13_H
#define CHALLENGE13_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Interval {
public:
	// Members
	int start; 
	int end; 

	// Constructors & Deconstructors
	Interval() {}
	Interval(int start, int end) {
		this->start = start; 
		this->end = end; 
	}
	~Interval() = default;
};

class Challenge13 {
public:
	// Constructors & Deconstructors
	Challenge13() {}
	~Challenge13() = default;

	// Methods
	vector<Interval> sortAndMerge(vector<Interval>& );
};

#endif
