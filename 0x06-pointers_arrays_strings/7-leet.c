#include "holberton.h"
/**
 *leet - function that encodes a string into 1337.
 *@a:Pointer type of char
 *Return:return the variable a.
 */
char *leet(char *a)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char Number[] = "4433007711";

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (a[i] == s[j])
			{
				a[i] = Number[j];
			}
			j++;
		}
		i++;
	}
	return (a);
}
