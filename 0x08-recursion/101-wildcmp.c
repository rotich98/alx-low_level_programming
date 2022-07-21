#include "main.h"
#include <stdio.h>

/**
 * wildcmp ->  compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	return (looker(s1, s2, 0, 0, -1));
}

/**
 * lookLast - check last char of s2 when s1 ends
 * @s: string
 * @i: int
 * Return: int
 */
int lookLast(char *s, int i)
{
	if (s[i] == '*')
		return (lookLast(s, i + 1));
	else if (s[i] == '\0')
		return (1);

	return (0);
}

/**
 * looker - finds
 * @s1: string
 * @s2: string
 * @a: int
 * @b: int
 * @wildUsed: int
 * Return: int
 */
int looker(char *s1, char *s2, int a, int b, int wildUsed)
{
	if (s1[a] != '\0')
	{
		if (s2[b] == '\0')
			return (0);
	else if (s2[b] == '*')
	{
		if (s2[b + 1] == '*')
			return (looker(s1, s2, a, b + 1, b));
		else if (s2[b + 1] == s1[a])
			return (looker(s1, s2, a, b + 1, b));
		else if (s1[a + 1] != s2[b + 1])
			return (looker(s1, s2, a + 1, b, b));
		else if (s1[a + 1] == s2[b + 1])
			return (looker(s1, s2, a + 1, b + 1, b));
	}
	else if ((s1[a] == s2[b]) || (s2[b] == '*' && s2[b + 1] == s1[a + 1]))
		return (looker(s1, s2, a + 1, b + 1, wildUsed));
	if (wildUsed == -1)
		return (0);
	return (looker(s1, s2, a, wildUsed, wildUsed));
	}
	if (s2[b] != '\0')
		return (lookLast(s2, b));
	return (1);
}
