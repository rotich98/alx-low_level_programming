#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - sum all argument
 * @n: number of argument to sum
 * Return: sum of all argument
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	unsigned int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
