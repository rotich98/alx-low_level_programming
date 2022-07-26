#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> returns a pointer to a 2 dimensional array
 * @width: width of the grid
 * @height: Height of the grid
 * Return: Pointer to 2D array, NULL if it fails
 */
int **alloc_grid(int width, int height);
{
	int a, b, c, d;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(s[b]);
			}
			free(s);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			s[c][d] = 0;
		}
	}
	return (s);
}
