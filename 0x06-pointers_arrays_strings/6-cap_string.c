#include "main.h"
#include <stdio.h>

/**
 * cap_string -> A function that capitalizes character
 * @p: String to capitalize
 * Return: Returns the capitalized string
 */
char *cap_string(char *p)
{
	int x = 0, i;
	int len = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (p[x])
	{
		i = 0;

		while (i < len)
		{
			if ((x == 0 || p[x - 1] == spc[i]) && (p[x] >= 97 && p[x] <= 122))
				p[x] -= 32;
			i++;
		}
		x++;
	}
	return (p);
}
