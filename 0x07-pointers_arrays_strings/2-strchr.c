#include "holberton.h"
/**
 *_strchr - Function that locates a character in a string.
 *@s: Pointer type of char.
 *@c: Variable type of char
 *Return: return variable type of char.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	return (0);
}
