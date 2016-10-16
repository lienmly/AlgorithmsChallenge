//=====================================================================================
//
// Lien Ly
// Challenge from Hackerrank.com  
// 
//-------------------------------------------------------------------------------------
// Description
// Debug C++ class from 30 Days of Code
//
// Challenge17.h - Basic Class
//=====================================================================================
#ifndef CHALLENGE17_H
#define CHALLENGE17_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person_C17 {
public:
	// Members
	int age;

	// Constructors & Deconstructors 
	Person_C17(int initialAge);
	~Person_C17() = default;

	// Methods
	void amIOld();
	void yearPasses();
};

Person_C17::Person_C17(int initialAge) {
	// Add some more code to run some checks on initialAge
	if (initialAge < 0) {
		age = 0;
		cout << "Age is not valid, setting age to 0." << endl;
	}
	else
		age = initialAge; 
}

void Person_C17::amIOld() {
	// Do some computations here and print out the correct statement to the console 
	if (age < 13) {
		cout << "You are young." << endl;
	}
	else if (age >= 13 && age < 18) {
		cout << "You are a teenager." << endl;
	}
	else {
		cout << "You are old." << endl;
	}

}

void Person_C17::yearPasses() {
	// Increment the age of the person here
	++age;
}

#endif