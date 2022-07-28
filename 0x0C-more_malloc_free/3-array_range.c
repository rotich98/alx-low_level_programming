#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range ->  create an array of integers from min to max
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: a pointer to the new array or NULL if it fail
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int a;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		array[a] = min++;
	return (array);
}


