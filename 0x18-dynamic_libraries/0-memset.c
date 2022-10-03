#include "main.h"

/**
 * _memset -> functin that concatenates two strings
 *  @s: pointer
 *  @b: parameter
 *  @n: parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0 ; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}

