#include "holberton.h"
/**
 *_strncat - function the src string to the dest string with most n byte
 *@dest: Pointer type of char
 *@src: Pointer type of char
 *@n: Variable type integer.
 *Return: In this case return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	for (i = 0; *(dest + i); i++)
	{
		;
	}
	for (d = 0; *(src + d) && n > 0; d++, n--, i++)
	{
		*(dest + i) = *(src + d);
	}

	return (dest);
}
