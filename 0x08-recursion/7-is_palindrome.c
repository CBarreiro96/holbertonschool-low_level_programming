#include "holberton.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = Lengthq(s) - 1;

	return (pal(s, --length));
}

/**
 * Lengthq - gets length of string
 * @s: string
 * Return: return length of string
 */

int Lengthq(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + Lengthq(++s));
}

/**
 * pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (pal(++s, l - 2));
	}
	else
		return (0);
}
