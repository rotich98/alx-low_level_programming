#include "main.h"
#include <string.h>

/**
 * _strncat -> A function that concatenates two strings
 * @dest: Destination value
 * @src: Source value
 * @n: concatenation limit
 * Return: Apointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);

}
