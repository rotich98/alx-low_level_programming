#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
