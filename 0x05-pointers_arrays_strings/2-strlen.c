#include "main.h"

/**
 * _strlen - a function to get the length of a string
 * @s: a string pointer to pass to the function
 * Return: Returns length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
