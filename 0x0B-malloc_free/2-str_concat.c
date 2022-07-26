#include "main.h"
#include <stdlib.h>

/**
 * str_concat -> Concatenate (combine) two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *empt;
	int x, len1, len2, k;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	x = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	x = 0;
	while (x < len1)
	{
		s3[x] = s1[x];
		x++;
	}
	k = 0;
	while (k <= len2)
	{
		s3[x] = s2[k];
		x++;
		k++
	}
	return (s3);
}

