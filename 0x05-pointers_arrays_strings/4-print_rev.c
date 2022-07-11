#include "main.h"
#include <string.h>

/**
 * print_rev -> prints a string in reverse
 * @s: The string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i  = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

