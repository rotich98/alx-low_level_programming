#include "main.h"

/**
 * puts_half -> Prints half the string
 * @str: The string being printed
 */
void puts_half(char *str)
{
	int i = 0;
	int q;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		q = (i - 1) / 2;
		q += 1;
	}
	else
	{
		q = i / 2;
	}
	for (; q < i; q++)
	{
		_putchar(str[q]);
	}
	_putchar('\n');
}
