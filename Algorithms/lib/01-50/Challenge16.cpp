//=====================================================================================
//
// Lien Ly
// Challenge from Hackerrank.com  
// 
//-------------------------------------------------------------------------------------
// Description
// Debug C++ class syntax (operators) from 30 Days of Code
//
// Challenge16.cpp - Basic Operators
//=====================================================================================
#include "Challenge16.h"

void Challenge16::practiceOperator()
{
	double mealCost;
	double tipPercent;
	double taxPercent;
	double totalCost_dec; 
	int totalCost;

	cout << "mealCost: "; // 10.25
	cin >> mealCost;
	cout << "tip percent: "; // 17
	cin >> tipPercent;
	cout << "tax percent: "; // 5 
	cin >> taxPercent;

	totalCost = mealCost + mealCost*(tipPercent / 100) + mealCost*(taxPercent / 100); 
	totalCost_dec = mealCost + mealCost*(tipPercent / 100) + mealCost*(taxPercent / 100); 

	if (totalCost_dec - (double)totalCost >= 0.5)
		cout << "The total meal cost is " << totalCost + 1 << " dollars.";
	else 
		cout << "The total meal cost is " << totalCost << " dollars.";
}
