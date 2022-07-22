#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiply the args
 * @argc: Argument count
 * @argv: Array of argument strings
 * Return: 0
 */
int main(int argc, char *argv)
{
	int item;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", item);
	return (0);
}
