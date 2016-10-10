//=============================================
// 
// Lien Ly - Google phone screen
// You have a n by n grid of stones which are 
// red or blue. Give a coordinate on this grid, 
// perform the following: If the stone is blue, 
// make it red. Then, for all of its blue 
// neighbors, do this function on them. If the 
// stone is red, make it blue. Then, for all of 
// its red neighbors, do this function on them.
// 
// ConsecutiveColors.h
//=============================================
#ifndef GPS_H
#define GPS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GPS {
public:
	int n; 
	void changeColor(int, int, int [][9]); 
	bool isInRange(int, int); 
	bool isSameColor(int, int); 
};

#endif

// 

// 

// 

// 