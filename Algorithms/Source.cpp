//=====================================================================================
// 
// Lien Ly 
// Debug file 
// 
// Source.cpp
//=====================================================================================
#include "Challenge01.h"
#include "Challenge03.h"
#include "Challenge04.h"
#include "Challenge05.h"
#include "Challenge06.h"
#include "Challenge07.h"
#include "Challenge08.h"
#include "Challenge12.h"
#include "Challenge14.h"
#include "Challenge15.h"
#include "Challenge16.h"
#include "Challenge17.h"
#include "Challenge18.h"
#include "Challenge19.h"

// 1 of solutions to fix template linker error
#include "Challenge19.cpp" 

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std; 

int main() {
	// ----------------------------------------------------------------------
	// Challenge19 - Linked List class 
	// ----------------------------------------------------------------------
	// LinkedList<int> ll_c19() == LinkedList<int> ll_c19; => Empty constructor 
	vector<int> vector_c19 = { 8,4,1,22,98,56,100 }; 
	// ++ ------- Constructor takes vector<T> as parameter ------- ++ 
	LinkedList<int> ll_c19(vector_c19); 
	std::cout << ll_c19; 

	// ++ ------- Copy Constructor ------- ++ 
	LinkedList<int> ll_c19_copy(ll_c19); 
	std::cout << ll_c19_copy; 

	// ++ ------- Assignment Operator ------- ++
	LinkedList<int> ll_c19_assign = ll_c19_copy; 
	std::cout << ll_c19_assign; 

	// ++ ------- LinkedList empty - get first, get last element ------- ++
	if (vector_c19.empty()) std::cout << "vector_c19 is empty" << std::endl; 
	else std::cout << "vector_c19 is not empty" << std::endl; 

	vector<int> emptyVector_c19 = {}; 
	LinkedList<int> emptyll_c19(emptyVector_c19);
	if (emptyVector_c19.empty()) std::cout << "emptyVector_c19 is empty" << std::endl;
	else std::cout << "emptyVector_c19 is not empty" << std::endl;

	std::cout << "getFirst() => " << ll_c19.getFirst()->data << std::endl; 
	std::cout << "getLast() => " << ll_c19.getLast()->data << std::endl; 

	// ++ ------- insertFirst ------- ++
	ll_c19.insertFirst(1001);
	std::cout << ll_c19; 

	// ++ ------- insertLast ------- ++
	ll_c19.insertLast(39); 
	std::cout << ll_c19; 

	// ++ ------- insertAfter ------- ++
	ll_c19.insertAfter(56, -1); 
	std::cout << ll_c19; 

	// ++ ------- removeFirst ------- ++
	ll_c19.removeFirst();
	std::cout << ll_c19;

	// ++ ------- removeLast ------- ++
	ll_c19.removeLast();
	std::cout << ll_c19;

	// ++ ------- remove ------- ++
	ll_c19.remove(22);
	std::cout << ll_c19;

	// ++ ------- destroy ------- ++
	ll_c19.destroy();
	std::cout << ll_c19;

	// ----------------------------------------------------------------------
	// Challenge18 - Find sum of 2 strings => return a string 
	// ----------------------------------------------------------------------
	//Challenge18 c18; 
	//string int1_c18 = "123", int2_c18 = "234"; 
	//string result_c18 = c18.sumOfTwoStrings_stl(int1_c18, int2_c18);
	//cout << result_c18 << endl; //357

	//string result1_c18 = c18.sumOfTwoStrings_Nostl(int1_c18, int2_c18); 
	//cout << result1_c18 << endl; //357
	//
	//// ----------------------------------------------------------------------
	//// Challenge08 - Find largest sums of hour glass 2D array 
	//// ----------------------------------------------------------------------
	//Challenge08 c08;
	//int arr_c08[6][6] =
	//{
	//	{-1,-1,0,-9,-2,-2},
	//	{-2,-1,-6,-8,-2,-5},
	//	{-1,-1,-1,-2,-3,-4},
	//	{-1,-9,-2,-4,-4,-5},
	//	{-7,-3,-3,-2,-9,-9},
	//	{-1,-3,-1,-2,-4,-5}
	//}; 
	//c08.findSum(arr_c08);

	//// ----------------------------------------------------------------------
	//// Challenge04 - Find consecutive ones in a number's binary form  
	//// ----------------------------------------------------------------------
	//Challenge04 c04;
	//cout << c04.findConsecutiveOnes(439) << endl;

	//// ----------------------------------------------------------------------
	//// Challenge06 - Dynamic programming - Stock price 
	//// ----------------------------------------------------------------------
	//vector<int> price_c06 = {5,9,2,3,4,1}; 
	//Challenge06 c06;
	//cout << c06.maxProfit(price_c06) << endl;

	//// ----------------------------------------------------------------------
	//// Challenge05 - Count Bits 
	//// ----------------------------------------------------------------------
	//Challenge05 c05;
	//int num = 10;
	//vector<int> test_c05 = c05.countBits(num);

	//for (int i = 0; i < test_c05.size(); i++)
	//	cout << test_c05[i] << " ";
	//
	//cout << endl;

	//// ----------------------------------------------------------------------
	//// Challenge15 - Sum of 2 ints 
	//// ----------------------------------------------------------------------
	//Challenge15 c15;
	//c15.getSum(-12, -8);
	//c15.getSum(2147483647, -2147483648LL);

	//// ----------------------------------------------------------------------
	//// Challenge01 - Binary Search
	//// ----------------------------------------------------------------------
	//Challenge01 c01;
	//vector<int> c1_test = {-2000, -340, -200, -89, -41, -22, - 7, 2, 33, 42, 69, 73, 101, 431}; 
	//vector<int> c1_test1 = { 5, 15 };
	//cout << "position: " << c01.search(c1_test, 33, 0) << endl; // Return 8

	//// ----------------------------------------------------------------------
	//// Challenge12 - Merge 2 sorted arrays 
	//// ----------------------------------------------------------------------
	//Challenge12 c12;
	//int array1_c12[4] = { 2,5,7,8 };
	//int array2_c12[5] = { 2,4,7,12,32 };
	//int mergeArray[9] = {}; 
	//
	//for (int i = 0; i < 9; i++) {
	//	cout << c12.merge(array1_c12, 4, array2_c12, 5)[i] << ", ";
	//}
	//cout << endl; 

	//// ----------------------------------------------------------------------
	//// Challenge03 - Fill consecutive colors in grid 
	//// ----------------------------------------------------------------------
	//Challenge03 c03;
	//c03.n = 9;
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
	//c03.changeColor(row, col, grid);

	//for (int i = 0; i < 9; i++) {
	//	for (int j = 0; j < 9; j++) {
	//		cout << grid[i][j] << " "; 
	//	}
	//	cout << endl; 
	//}
	//cout << endl; 

	//// ----------------------------------------------------------------------
	//// Challenge14 - Selection Sort 
	//// ----------------------------------------------------------------------
	//Challenge14 c14;
	//int test_c14[] = {4,12,4,78,7,-1};
	//c14.selection_sort_array(test_c14,6);

	//for (int i = 0; i < 6; i++) {
	//	cout << test_c14[i] << ", ";
	//}
	//cout << endl; 

	//// ----------------------------------------------------------------------
	//// Challenge16 - Basic Operators 
	//// ----------------------------------------------------------------------
	//Challenge16 c16;
	//c16.practiceOperator();
	//cout << endl; 

	//// ----------------------------------------------------------------------
	//// Challenge07 - Find the First Non Duplicate Character in a String
	//// ----------------------------------------------------------------------
	//Challenge07 c07;
	//string test_c07 = "aaaa";
	//c07.first_non_repeating(test_c07);

	//// ----------------------------------------------------------------------
	//// Challenge17 - Implement basic person class 
	//// ----------------------------------------------------------------------
	//Person_C17 person_c17(-1);
	//person_c17.amIOld();

	// Everything is fine
	return 0; 
}