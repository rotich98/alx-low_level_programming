#include "main.h"

/**
 * leet -> encodes a string
 * @p: The string to encode
 * Return: The encoded string
 */
char *leet(char *p)
{
	int x = 0, y = 0, i = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (p[a])
	{
		while (y < i)
		{
			if (p[x] == r[y] || p[x] - 32 == r[y])
			{
				p[x] = n[y];
			}
			y++;
		}
		x++;
	}
	return (p);
}
