#include "lists.h"
/**
 * tartfunction - prints a string before the main function is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) startfunction(void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
