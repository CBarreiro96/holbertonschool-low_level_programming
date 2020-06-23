#include "holberton.h"
/**
 *_strlen - leng of pointer
 *@s: Pointer type of char
 *Return: return c abour leng.
 */


int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
