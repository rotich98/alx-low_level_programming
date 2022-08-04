#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 *  @separator: item to use ot separate numbers
 *  @n: number of argument to sum
 *  Return: sum of all argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;

	va_list ap;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(a, int));
		if (a != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
