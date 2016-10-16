//=============================================
// 
// Lien Ly 
// 
// ConsecutiveColors.cpp
//=============================================
#include "Challenge03.h"

void GPS::changeColor(int row, int col , int grid[][9])
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

bool GPS::isInRange(int value, int gridSize)
{
	if (value >= 0 && value < gridSize)
		return true;

	return false;
}

bool GPS::isSameColor(int value, int currentColor)
{
	if (value == currentColor)
		return true;

	return false;
}
