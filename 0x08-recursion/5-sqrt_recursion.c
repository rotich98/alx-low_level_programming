#include "main.h"

/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: parameter int
 * Return: returns int
 */
int _sqrt_recursion(int n)
{
	return (math_square(n, 1));
}

/**
 * math_square -> find square root
 * @n: value int to find square root
 * @corr: Square root
 * Return: int
 */
int math_square(int n, int corr)
{
	if (corr * corr == n)
		return (corr);
	else if (corr * corr < n)
		return (math_square(n, corr + 1));
	else
		return (-1);
}
