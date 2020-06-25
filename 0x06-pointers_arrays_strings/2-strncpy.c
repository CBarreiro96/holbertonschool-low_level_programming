#include "holberton.h"
/**
 *_strncpy - printf about description.
 *@dest:Pointer type of char.
 *@src:Pointer type of char.
 *@n:Variable type of integer.
 *Return: It return dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
