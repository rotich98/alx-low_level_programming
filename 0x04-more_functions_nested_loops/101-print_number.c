#include "main.h"
#include <stdio.h>

/**
 * print_number - prints numbers 0 to 9 and new line
 * @n: The integer to prints.
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}

	x /= 10;

	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}

