#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1:Pointer type of char.
 *@s2:Pointer type of char
 *Return: Return variable a
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, n, c;

	for (i = 0; s1[i] != '\0' ; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	n = i + j;
	a = malloc(n * sizeof(*a) + 1);

	for (c = 0; c <= i; c++)
		a[c] = s1[c];
	for (c = 0; c < j ; c++, i++)
		a[i] = s2[c];
	a[n] = '\0';
	return (a);
}
