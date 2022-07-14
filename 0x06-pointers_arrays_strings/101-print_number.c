#include "main.h"

/**
 * print_number -> Function that prints an interger
 * @n:parameter
 */
void print_number(int n)
{
	unsigned int param = n;

	if (n < 0)
	{
		_putchar('-');
		param = -param;
	}
	if ((param / 10) > 0)
		print_number(param / 10);

	_putchar((param % 10) + '0');
}
