#include "main.h"
#include <stdlib.h>

/**
 * free_grid -> frees a 2 dimensional grid
 * @grid: he 2D array to free memory
 * @height: The height of the 2D array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

	{
		free(grid[a]);
	}
	free(grid);
}
