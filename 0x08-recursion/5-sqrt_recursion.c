#include "main.h"

/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: parameter int
 * Return: returns int
 */
int _sqrt_recursion(int n)
{
	return (mathsquare(n, 1));
}

/**
 * mathsquare -> find square root
 * @n: value int to find square root
 * @corr: Square root
 * Return: int
 */
int mathsquare(int n, int corr)
{
	if (corr * corr == n)
		return (corr);
	else if (corr * corr < n)
		return (mathsquare(n, corr + 1));
	else
		return (-1);
}
