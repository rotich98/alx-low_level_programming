#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -> Allocates memory for array elements
 * @nmemb: Array elements
 * @size: The size of each element in bytes
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mry;
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mry = malloc(size * nmemb);

	if (!mry)
		return (NULL);
	ptr = mry;
	for (a = 0; a < (size * nmemb); a++)
		ptr[a] = '\0';
	return (mry);
}
