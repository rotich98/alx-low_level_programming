#include "main.h"

/**
 * _strncpy -> A function that concatenates two strings
 * @dest: Destination value
 * @src: Source value
 * @n: concatenation limit
 * Return: Apointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len++])
		i++;

	for (len = 0; src[len] && len < n; len++)
		dest[i++] = src[len];

	return (dest);
}
