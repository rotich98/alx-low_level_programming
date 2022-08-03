#include "function_pointers.h"

/**
 * array_iterator -> executes a function given
 * @array: pointer to an int
 * @size: size of an array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
