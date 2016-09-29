#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include "CountBits.h"
#include "SumOf2Ints.h"
#include "BinarySearch.h"
#include "merge2SortedArrays.h"
#include "GooglePhoneScreen.h"
#include "SelectionSort.h"
#include "basic_operators.h"
#include "FirstNoneDuplicate.h"
#include "basic_class.h"
#include "DP_StockPriceGoogle.h"
#include "ConsecutiveOnes.h"
#include "HourGlassSum.h"

using namespace std; 

int main() {
	// ------------------------------
	// Find largest sums of hour glass 2D array - hackerrank  
	// ------------------------------
	HourGlassSum hgs; 
	int arr[6][6] =
	{
		{-1,-1,0,-9,-2,-2},
		{-2,-1,-6,-8,-2,-5},
		{-1,-1,-1,-2,-3,-4},
		{-1,-9,-2,-4,-4,-5},
		{-7,-3,-3,-2,-9,-9},
		{-1,-3,-1,-2,-4,-5}
	}; 
	hgs.findSum(arr); 

	// ------------------------------
	// Find consecutive ones in a number's binary form - hackerrank  
	// ------------------------------
	/*ConsecutiveOnes CO; 
	cout << CO.findConsecutiveOnes(439) << endl;*/

	// ------------------------------
	// Dynamic programming - Stock price - Google 
	// ------------------------------
	/*vector<int> price = {5,9,2,3,4,1}; 
	maxProfitStockPrice mpsp; 
	cout << mpsp.maxProfit(price) << endl;*/

	// ------------------------------
	// Count Bits test 
	// ------------------------------
	/*CountBits cb; 
	int num = 10;
	vector<int> test = cb.countBits(num);

	for (int i = 0; i < test.size(); i++) 
		cout << test[i] << " ";
	
		
	cout << endl;*/

	// ------------------------------
	// Sum of 2 ints test 
	// ------------------------------
	/*SumOf2Ints si; 
	si.getSum(-12, -8);
	si.getSum(2147483647, -2147483648LL);*/

	// ------------------------------
	// Binary Search
	// ------------------------------
	//BinarySearch bs; 
	//vector<int> bstest = {-2000, -340, -200, -89, -41, -22, - 7, 2, 33, 42, 69, 73, 101, 431}; 
	//vector<int> bstest1 = { 5, 15 };
	//cout << "position: " << bs.search(bstest, 431) << endl; // Return 8

	// ------------------------------
	// Merge 2 sorted arrays 
	// ------------------------------
	//M2SA m2sa; 
	//int array1[4] = { 2,5,7,8 };
	//int array2[5] = { 2,4,7,12,32 };
	//int mergeArray[9] = {}; 
	////mergeArray = m2sa.merge(array1,4, array2,5);
	////copy(mergeArray, mergeArray + 9, m2sa.merge(array1, 4, array2, 5)); 
	//for (int i = 0; i < 9; i++) {
	//	cout << m2sa.merge(array1, 4, array2, 5)[i] << ", ";
	//}
	//cout << endl; 

	// ------------------------------
	// Google Phone Screen
	// ------------------------------
	//GPS gps; 
	//gps.n = 9;
	//int grid[9][9] = 
	//{	
	//	{1,0,0,0,0,1,1,0,1},
	//	{1,0,1,1,0,1,0,0,0},
	//	{1,0,0,1,0,0,0,1,0},
	//	{1,1,0,1,1,1,1,1,0},
	//	{0,1,0,0,0,0,0,0,0},
	//	{0,1,0,0,0,0,0,1,0}, // row = 5, col = 3
	//	{1,1,1,1,1,1,1,1,1},
	//	{0,0,1,1,0,0,1,1,0},
	//	{0,0,0,0,0,0,1,1,1}
	//};

	//int row = 5, col = 3; 
	///*int ** result = new int*[9]; 
	//result = gps.changeColor(row,col,grid); */

	//gps.changeColor(row, col, grid);

	//for (int i = 0; i < 9; i++) {
	//	for (int j = 0; j < 9; j++) {
	//		cout << grid[i][j] << " "; 
	//	}
	//	cout << endl; 
	//}
	//cout << endl; 

	// ------------------------------
	// Selection Sort 
	// ------------------------------
	/*SelectionSort ss; 
	int test[] = {4,12,4,78,7,-1}; 
	ss.selection_sort_array(test,6); 

	for (int i = 0; i < 6; i++) {
		cout << test[i] << ", "; 
	}
	cout << endl; */

	// ------------------------------
	// Basic Operators 
	// ------------------------------
	/*BO bo; 
	bo.practiceOperator(); 
	cout << endl; */

	// ------------------------------
	// Find the First Non Duplicate Character in a String
	// ------------------------------
	/*FND fnd; 
	string test = "aaaa"; 
	fnd.first_non_repeating(test); */

	// ------------------------------
	// Implement basic person class 
	// ------------------------------
	/*Person person(-1); 
	person.amIOld(); */

	// Everything is fine
	return 0; 
}