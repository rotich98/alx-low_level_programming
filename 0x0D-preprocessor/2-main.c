#include <stdio.h>

/**
 * main - print the name of the file the program is compiled from.
 * Return: Nothing.
 */
int main(void)
{
	printf("%s\n", _FILE_NAME_);
	return (0);
}
