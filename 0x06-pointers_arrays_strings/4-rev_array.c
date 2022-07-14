#include "main.h"
#include <stdio.h>

/**
 * reverse_array -> Reverses the array items
 * @a: An array of intergers
 * @n: Number of elements to reverse
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, len;

	for (len = n - 1; len > n / 2; len--)
	{
		tmp = a[n - 1 - len];
		a[n - 1 - len] = a[len];
		a[len] = tmp;
	}
}
