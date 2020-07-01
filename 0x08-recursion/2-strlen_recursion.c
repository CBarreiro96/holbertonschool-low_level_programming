#include "holberton.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: Pointer typr of char.
 *Return: Variable i typr of integer.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
