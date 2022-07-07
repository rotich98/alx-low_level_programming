#include "main.h"

/**
 * print_line -> printing line
 * @n: parameters of type int
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
