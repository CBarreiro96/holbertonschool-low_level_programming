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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' ; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	n = i + j;
	a = malloc(n * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c <= i; c++)
		a[c] = s1[c];
	for (c = 0; c < j ; c++, i++)
		a[i] = s2[c];
	return (a);
}
