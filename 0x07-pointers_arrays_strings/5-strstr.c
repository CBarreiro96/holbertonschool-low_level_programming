#include "holberton.h"
#include <stdlib.h>
/**
 *_strstr - function that locates a substring.
 *@haystack: Pointer type of char.
 *@needle: Pointer type of char.
 *Return: return pointer.
 */
char *_strstr(char *haystack, char *needle)
{

	while (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack++;
		}

		needle++;
	}
	return (NULL);
}
