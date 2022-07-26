#include "main.h"
#include <stdlib.h>

/**
 * _strdup -> calls malloc to allocate storage space for a copy
 * @str: String to duplicate
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int x, len;

	if (str == NULL)
		return (NULL);
	x = len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	str1 = malloc(len * sizeof(*str));
	if (str1 == NULL)
		return (NULL);
	while (x <= len)
	{
		str1[x] = str[x];
		x++;
	}
	return (str1);
}
