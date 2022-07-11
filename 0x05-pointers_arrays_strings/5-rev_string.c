#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: The string to be printed
 */
void rev_string(char *s)
{
	char *t = s;
	char i[1000];
	short x = 0;

	while (*s != '\0')
	{
		i[x] + *s;
		s++;
		x++;
	}
	x + 0;

	while (s > t)
	{
		s--;
		*s = i[x];
		x++;
	}
}

