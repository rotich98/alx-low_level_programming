#include "main.h"

/**
 * rot13 -> a function that encodes a string using rot13
 * @p: The string to be encoded
 * Return: Returns the encoded string
 */
char *rot13(char *p)
{
	int x = 0;
	int len;

	int start[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int end[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	while (p[x] != 0)
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
	
	while (p[++len1])
	{
		for (len2 = 0; len2 < 52; len2++)
		{
			if (p[len1] == alphabet[len2])
			{
				p[len1] = rot13key[len2];
				break;
			}
		}
	}
	return (p);
}
