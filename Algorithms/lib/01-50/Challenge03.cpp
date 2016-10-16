//=====================================================================================
// 
// Lien Ly 
// Challenge from Google 
// 
//-------------------------------------------------------------------------------------
// Description
// You have a n by n grid of stones which are red or blue. Give a coordinate on this 
// grid, perform the following: 
// -- If the stone is blue, make it red. Then, for all of its blue neighbors, do this 
// function on them. 
// -- If the stone is red, make it blue. Then, for all of its red neighbors, do this 
// function on them.
// 
// Challenge03.cpp - Consecutive Colors
//=====================================================================================
#include "Challenge03.h"

void Challenge03::changeColor(int row, int col , int grid[][9])
{
	int currentColor = grid[row][col];

	if (currentColor == 0)
		grid[row][col] = 1;
	else
		grid[row][col] = 0;

	if (grid[row][col - 1] == currentColor && isInRange(col - 1, n)) 
		changeColor(row, col - 1, grid);
	if (grid[row][col + 1] == currentColor && isInRange(col + 1, n)) 
		changeColor(row, col + 1, grid);
	if (grid[row + 1][col] == currentColor && isInRange(row + 1, n)) 
		changeColor(row + 1, col, grid);
	if (grid[row - 1][col] == currentColor && isInRange(row - 1, n)) 
		changeColor(row - 1, col, grid);
}

bool Challenge03::isInRange(int value, int gridSize)
{
	if (value >= 0 && value < gridSize)
		return true;

	return false;
}

bool Challenge03::isSameColor(int value, int currentColor)
{
	if (value == currentColor)
		return true;

	return false;
}
