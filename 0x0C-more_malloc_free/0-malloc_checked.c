#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @x: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int x)
{
	int *ptr;

	ptr = malloc(c);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
