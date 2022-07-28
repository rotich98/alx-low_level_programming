#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -> concatenates two strings
 * @s1: pointer to the string
 * @s2: pointer to the second string
 * @n: parameter interger
 * Return: pointer to a newlly allocated memory with s1 & s2, NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strings;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	strings = malloc(sizeof(char) * (len + 1));

	if (!strings)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		strings[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		strings[len++] = s2[i];
	strings[len] = '\0';
	return (strings);
}

