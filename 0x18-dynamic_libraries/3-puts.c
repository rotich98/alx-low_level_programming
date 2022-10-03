#include "main.h"

/**
 * _puts - A function that puts a string
 * @str: A parameter to a _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

