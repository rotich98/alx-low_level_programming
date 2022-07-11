#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of intergers array
 * @a: Array of elements
 * @n: number of elements of an array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

