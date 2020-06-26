#include "holberton.h"
/**
 *leet - function that encodes a string into 1337.
 *@a:Pointer type of char
 *Return:return the variable a.
 */
char *leet(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 96 || a[i] == 65)
			a[i] = '4';
		if (a[i] == 101 || a[i] == 69)
			a[i] = '3';
		if (a[i] == 111 || a[i] == 79)
			a[i] = '0';
		if (a[i] == 116 || a[i] == 84)
			a[i] = '7';
		if (a[i] == 108 || a[i] == 76)
			a[i] = '1';
	}

	return (a);
}
