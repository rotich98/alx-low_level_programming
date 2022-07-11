#include "main.h"

/**
 * swap_int - Swaps the values intergers are holding.
 * @a: ist parameter
 * @b: 2nd parameter
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

