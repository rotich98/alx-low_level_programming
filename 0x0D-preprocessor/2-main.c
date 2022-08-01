#include <stdio.h>
#define FILE_NAME __FILE__

/**
 * main - print the name of the file the program is compiled from.
 * Return: Nothing.
 */
int main(void)
{
	printf("%s\n", FILE_NAME);
	return (0);
}
