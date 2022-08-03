#include "function_pointers.h"

/**
 * int_index -> searches for an interger
 * @array: array of intergers
 * @size: array size
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}

