#include "main.h"

/**
 * _strncpy -> function that copy a string.
 * @dest: Destination value
 * @src: Source value
 * @n: Copy limit
 * Return: character value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
