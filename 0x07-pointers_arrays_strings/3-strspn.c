#include "main.h"

/**
 * _strspn ->  gets the length of a prefix substring
 * @s: Parameter to be searched
 * @accept: parameter to get the length
 * Return:  the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
		if (*s == accept[x])
		{
			size++;
			break;
		}
		else if (accept[x + 1] == '\0')
			return (size);
	}
	s++;
	}
	return (size);
}
