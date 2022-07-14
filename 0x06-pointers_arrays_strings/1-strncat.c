#include "main.h"
#include <string.h>

/**
 * _strncpy -> A function that concatenates two strings
 * @dest: Destination value
 * @src: Source value
 * @n: concatenation limit
 * Return: Apointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
