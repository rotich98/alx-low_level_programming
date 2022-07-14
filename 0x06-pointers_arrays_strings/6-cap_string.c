#include "main.h"

/**
 * cap_string -> A function that capitalizes character
 * @p: String to capitalize
 * Return: Returns the capitalized string
 */
char *cap_string(char *p)
{
	int len = 0;

	while (p[++len])
	{
		while (!(p[len] >= 'a' && p[len] <= 'z'))
			len++;

		if (p[len - 1] == ' ' ||
			p[len - 1] == '\t' ||
			p[len - 1] == '\n' ||
			p[len - 1] == ',' ||
			p[len - 1] == ';' ||
			p[len - 1] == '.' ||
			p[len - 1] == '!' ||
			p[len - 1] == '?' ||
			p[len - 1] == '"' ||
			p[len - 1] == '(' ||
			p[len - 1] == ')' ||
			p[len - 1] == '{' ||
			p[len - 1] == '}')
			p[len] -= 32;
	}
	return (p);
}

