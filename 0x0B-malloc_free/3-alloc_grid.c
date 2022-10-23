#include "main.h"

/**
 * **alloc_grid - function to allocate space to a multidimensional array
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: an integer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n;
	int *m;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		*(grid + n) = (int *)malloc(width * sizeof(int));
		if (*(grid + n) == NULL)
		{
			for (n = 0; n < height; n++)
			{
				m = grid[n];
				free(m);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
