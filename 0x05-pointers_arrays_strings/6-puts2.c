#include "main.h"

/**
 * puts2 - prints each character of a string
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y += 1;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
