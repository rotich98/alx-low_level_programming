#include "function_pointers.h"

/**
 * print_name -> prints name
 * @name: String argument
 * @f: a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
