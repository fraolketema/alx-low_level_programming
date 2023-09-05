#include "main.h"

/**
 * free_grid - A function that frees 2d grid
 * @grid: 2 dimensional grid
 * @height: Height of grid
 * Description: frees memory
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
