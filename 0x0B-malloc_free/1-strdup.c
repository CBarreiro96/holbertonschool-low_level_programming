#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - contains a copy of the string given as a parameter.
 *@str: Pointer
 *Return: return depend of case.
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	a = malloc(i * sizeof(*str));

	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < i; j++)
	{
		a[j] = str[j];
	}
	
	return (a);
}
