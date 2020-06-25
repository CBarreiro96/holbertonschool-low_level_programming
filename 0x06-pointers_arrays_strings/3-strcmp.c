#include "holberton.h"
/**
 *_strcmp - compare string.
 *@s1: Pointer type char
 *@s2: Pointer type of char.
 *Return: It return the rest of 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}
