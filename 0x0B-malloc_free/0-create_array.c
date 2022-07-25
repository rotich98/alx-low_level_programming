#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -> creates an array of chars
 * @size: memory size to be allocated
 * @c: character to occupy the memory
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
