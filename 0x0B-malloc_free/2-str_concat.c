#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -> Concatenate (combine) two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	d = a + b;
	s3 = malloc((sizeof(char) * l) + 1);

	if (s3 == NULL)
		return (NULL);
	b = 0;

	while (c < d)
	{
		if (c <= a)
			s3[c] = s1[c];
		if (c >= a)
		{
			s3[c] = s2[b];
			b++;
		}
		c++;
	}
	s3[c] = '\0';
	return (s3);
}
