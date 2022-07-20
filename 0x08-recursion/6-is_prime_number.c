#include "main.h"
#include <stdio.h>

/**
 * is_prime_number ->returns 1 if the input int is a prime number
 * @n: parameter int
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}

/**
 * prime_num -> check all number < n if they can divide it
 * @n: parameter int
 * @corre: parameter int
 * Return: return int
 */
int prime_num(int n, int corre)
{
	if (corre >= n && n > 1)
		return (1);
	else if (n % corre == 0 || n <= 1)
		return (0);
	else
		return (prime_num(n, corre + 1));
}
