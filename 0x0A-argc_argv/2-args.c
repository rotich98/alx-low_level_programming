#include <stdio.h>

/**
 * main - Print the of args
 * @argc: Argument count
 * @argv: Array of argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
