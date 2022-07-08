#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9 and new line
 * @i: The integer to prints.
 */
void print_numbers(int i)
{
	unsigned int x = i;

	if (i < 0)
	{
		i *= -1;
		x = i;
		_putchar('-');
	}

	x /= 10;

	if (x != 0)
		print_number(x);
	_putchar((unsigned int) i % 10 + '0');
}

