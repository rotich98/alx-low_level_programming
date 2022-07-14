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
	int *p x, len, k;

	p = a;

	for (x = 1; x < n; x++)
	{
		p++;
	}
for (k = 0; k < x / 2; k++)
{
len = a[k];
a[k] = *p;
p--;
}
}
