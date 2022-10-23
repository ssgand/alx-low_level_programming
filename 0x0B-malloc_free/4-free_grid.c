#include "main.h"

/**
 * free_grid - function to free a grid preciously created
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int *n;

	for (i = 0; i < height; i++)
	{
		n = grid[i];
		free(n);
	}
	free(grid);
}
