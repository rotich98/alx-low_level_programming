#include "main.h"

/**
 * end_index -> returns the last index of a string
 * @s: pointer to the string
 * Return: int
 */
int end_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += end_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome ->  returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int last = end_index(s);

	return (look(s, 0, last - 1, last % 2));
}

/**
 * look -> looks for palidrome
 * @s: string
 * @begin: int start from right to left
 * @end: int move from left to right
 * @grp: int
 * Return: 0 or 1
 */
int look(char *s, int begin, int end, int grp)
{
	if ((begin == end && grp != 0) || (begin == end + 1 && grp == 0))
		return (1);
	else if (s[begin] != s[end])
		return (0);
	else
		return (look(s, begin + 1, end - 1, grp))
}
