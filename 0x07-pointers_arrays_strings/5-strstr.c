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
	int a;
	int i = 0;

	while (haystack[i])
	{
		a = 0;

		while (needle[a] != '\0' && needle[a] == haystack[i + a]
		      && haystack[i + a] != '\0')
		{
			a++;
		}
		if (needle[a] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
