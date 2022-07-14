#include "main.h"

/**
 * leet -> encodes a string
 * @p: The string to encode
 * Return: The encoded string
 */
char *leet(char *p)
{
	int len1 = 0, len2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (p[++len1])
	{
		for (len2 = 0; len2 <= 7; len2++)
		{
			if (p[len1] == leet[len2] ||
				p[len1] - 32 == leet[len2])
				p[len1] = len2 + '0';
		}
	}
	return (p);
}

