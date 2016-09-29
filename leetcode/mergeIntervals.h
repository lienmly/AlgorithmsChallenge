// mergeIntervals.h
#ifndef MERGEINTERVALS_H
#define MERGEINTERVALS_H

#include <vector>
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Interval {
public:
	int start; 
	int end; 
	Interval() {}
	Interval(int start, int end) {
		this->start = start; 
		this->end = end; 
	}
};

class MergeIntervals {
public:
	vector<Interval> sortAndMerge(vector<Interval>& );
};

#endif
