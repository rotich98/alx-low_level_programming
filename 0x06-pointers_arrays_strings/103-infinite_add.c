#include "main.h"

/**
 * infinite_add - a function that adds two numbers
 * @n1: a char pointer given by main that represents a num
 * @n2: a char pointer given by main that represents a num
 * @r: a buffer given by main
 * @size_r: the buffer size given by main
 * Return: the result to char *r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, z = 0;
	int sum = 0;
	int tens = 0;
	int begin = 0;
	int swap = 0;

	while (n1[x] != 0)
		x++;
	while (n2[y] != 0)
		y++;
	x--;
	y--;
	if (x > size_r || y > size_r)
		return (0);
	for ( ; z < size_r; x--, y--, z++)
	{
		sum = tens;
		if (x >= 0)
			sum += n1[x] - '0';
		if (y >= 0)
			sum += n2[y] - '0';
		if (x < 0 && y < 0 && sum == 0)
			break;
		tens = sum / 10;
		r[z] = sum % 10 + '0';
	}
	if (x >= 0 || y >= 0 || sum > 0)
		return (0);
	r[z] = '\0';
	z--;
	for ( ; begin < z; z--, begin++)
	{
		swap = r[z];
		r[z] = r[begin];
		r[begin] = swap;
	}
	return (r);
}

