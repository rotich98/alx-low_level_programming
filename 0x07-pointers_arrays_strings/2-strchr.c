#include "main.h"

/**
 * _strchr -> function that locates a character in a string.
 * @s: parameter
 * @c: the string to be searched
 * Return: Pointer or null depending on the condition
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}

