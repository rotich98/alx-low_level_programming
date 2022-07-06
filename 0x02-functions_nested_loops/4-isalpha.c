#include "main.h"
/**
 *_isalpha - checks alphabet letters
 *@c: character is checked.
 *Return: Returns 0 or 1 based on the condition.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
