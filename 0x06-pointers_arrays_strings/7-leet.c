#include "holberton.h"
/**
 *leet - function that encodes a string into 1337.
 *@a:Pointer type of char
 *Return:return the variable a.
 */
char *leet(char *o)
{
	int i, z;
	char s[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (o[i] != '\0')
	{
		z = 0;
		while (s[z] != '\0')
		{
			if (o[i] == s[z])
			{
				o[i] = s2[z];
			}
			z++;
		}
		i++;
	}
	return (o);
}
