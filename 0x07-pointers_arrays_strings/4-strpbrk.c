#include "main.h"

/**
 * _strpbrk ->  searches a string for any of a set of bytes.
 * @s:The parameter to be searched
 * @accept: Bytes in the string to be searched for
 * Return:  pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}

