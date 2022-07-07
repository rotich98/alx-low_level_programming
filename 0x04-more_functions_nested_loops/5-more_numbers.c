#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 */
void more_numbers(void)
{
	int x, y;

	for (x = o; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}

