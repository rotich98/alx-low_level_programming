#include "main.h"

/**
 * string_toupper ->changes all lowercase letters to uppercase
 * @p: The string to be modified
 * Return: returns a character
 */
char *string_toupper(char *p)
{
	int len = 0;

	while (p[len++])
	{
		if (p[len] >= 'a' && p[len] <= 'z')
			p[len] -= 32;
	}

	return (p);
}
