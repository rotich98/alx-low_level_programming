#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print all argument
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	char *c;

	va_list ap;

	va_start(ap, n);

	if (!separator)
		return;

	for (a = 0; a < n; a++)
	{
		c =  va_arg(ap,  char*);
		printf("%s%s", c == NULL ? "(nil)" : c, a != (n - 1) ? separator : "");
	}

	printf('\n');
	va_end(ap);
}
