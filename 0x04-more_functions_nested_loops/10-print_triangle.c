#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Parameter
 */
void print_triangle(int size)
{
	int a, h;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for ((h = size - a); h > 0; h--)
				_putchar(' ');
			for (h = 0; h < a; h++)
				_putchar('#');
			if (a == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
