#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: The string to be printed
 */
void rev_string(char *s)
{
	int x, y, z;
	char *i, len;

	i = s;

	while (s[y] != '\0')
	{
		y += 1;
	}
	for (z = 1; z < y; z++)
	{
		i += 1;
	}
	for (x = 0; x < (y / 2); x++)
	{
		len = s[x];
		s[x] = *i;
		*i = len;
		i--;
	}
}
