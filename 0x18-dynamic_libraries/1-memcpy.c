#include "main.h"

/**
 * _memcpy -> copies n bytes from memory area src to memory area dest
 * @dest:A pointer to the memory destination
 * @src: The source buffer to copy characters from
 * @n: The bytes size to copy from @src
 * Return: returns pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
