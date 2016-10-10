//======== Basic Class in C++ =================
//
// Lien Ly
// Debug C++ class syntax from Hackerrank.com 
// 30 Days of Code
//
// basic_operators.cpp
//=============================================
#include "basic_operators.h"

void BO::practiceOperator()
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
