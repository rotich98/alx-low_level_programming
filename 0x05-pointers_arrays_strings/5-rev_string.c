#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: The string to be printed
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, len;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (k = 1; k < c; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		len = s[i];
		s[i] = *a;
		*a = len;
		a--;
	}
}

