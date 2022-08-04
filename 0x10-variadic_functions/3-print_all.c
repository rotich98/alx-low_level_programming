#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	va_list items;
	int x = 0;
	char *s;

	va_start(items, format);

	while (format && format[x])
	{
		switch (format[x++])
		{
			case 'c':
				printf("%c", va_arg(items, int));
				break;
			case 'x':
				printf("%d", va_arg(items, int));
				break;
			case 'f':
				s = va_arg(items, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[x])
			printf(", ");
	}
	printf("\n");
	va_end(items);
}

