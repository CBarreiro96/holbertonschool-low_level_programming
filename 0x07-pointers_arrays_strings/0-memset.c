#include "holberton.h"
/**
 *_memset - Fill some space.
 *@s: Pointer type char.
 *@b:Variable type of char.
 *@n: Variable type unsigned integer
 *Return: return variable pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	while(i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
