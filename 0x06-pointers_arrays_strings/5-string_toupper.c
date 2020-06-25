#include "holberton.h"
/**
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@a: Pointer type char.
 *Return: return variable a.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		if (a[i] > 97 && a[i] < 123)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
