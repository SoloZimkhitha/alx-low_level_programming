#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter of type integer
 * @height: parameter of type integer
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **)malloc(height * sizeof(int *));
	
	for (i = 0; i < height; i++)
	grid[i] = (int *)malloc(width * sizeof(int));
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		
		}
		return grid;

		if (width <= 0 || height <= 0)
		{
			return NULL;
		}
	}
}
