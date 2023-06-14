#include <stdlib.h>

/**
 * create_array -> creates an array of chars, and initializes it
 * @size : the desired size of the array
 * @c : initialize the array
 * return : the pointer to the initialized array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
