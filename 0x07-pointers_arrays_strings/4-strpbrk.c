#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s:Pointer type of char.
 *@accept:Pointer type of char
 *Return: it return new value s about cexercise condition.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (*(accept + i))
		{
			if (*(accept + i) == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}

	return (0);
}
