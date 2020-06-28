#include "holberton.h"
/**
 *_strspn - Function that gets the length of a prefix substring.
 *@s: Pointer type of char.
 *@accept: Variable type of char
 *Return: Retrun j.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	while (*s)
	{
		i = 0;

		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
			{
				j++;
				break;
			}
			i++;
		}
		if (*(accept + i) == '\0')
			break;

		s++;
	}
	return (j);
}
