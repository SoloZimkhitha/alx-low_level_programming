#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: parameter of type integer
 * @height: parameter of type integer
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
