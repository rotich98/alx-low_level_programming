#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 * @x: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int x)
{
	int *ptr;

	ptr = malloc(x);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
