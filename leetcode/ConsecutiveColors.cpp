#include "ConsecutiveColors.h"

void GPS::changeColor(int row, int col , int grid[][9])
{
	int currentColor = grid[row][col];

	if (currentColor == 0)
		grid[row][col] = 1;
	else
		grid[row][col] = 0;

	if (grid[row][col - 1] == currentColor && isInRange(col - 1, n))// && isSameColor(grid[row][col - 1], currentColor))
		changeColor(row, col - 1, grid);
	if (grid[row][col + 1] == currentColor && isInRange(col + 1, n))// && isSameColor(grid[row][col + 1], currentColor))
		changeColor(row, col + 1, grid);
	if (grid[row + 1][col] == currentColor && isInRange(row + 1, n))// && isSameColor(grid[row + 1][col], currentColor))
		changeColor(row + 1, col, grid);
	if (grid[row - 1][col] == currentColor && isInRange(row - 1, n))// && isSameColor(grid[row - 1][col], currentColor))
		changeColor(row - 1, col, grid);

	/*int ** newGrid = new int*[9]; 
	for (int i = 0; i < 9; i++) {
		newGrid[i] = new int[9];
		for (int j = 0; j < 9; j++)
			newGrid[i][j] = grid[i][j]; 
	}*/
		

	//return newGrid; 
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
