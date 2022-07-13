#include "main.h"
#include "string.h"

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

	while (dest[len])
	{
		len++;
	}

	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[len + n + 1] = '\0';

	return (dest);

}
