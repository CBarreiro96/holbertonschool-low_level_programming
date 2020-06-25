#include "holberton.h"
/**
 *_strcat - This function appends the src string to the dest string
 *@dest:Array type of char and It have hello
 *@src:Array type of char and It have world
 *Return: It return of value dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; *(dest + i) ; i++)
	{
		;
	}
	for (d = 0; *(src + d) ; d++)
	{
		*(dest + i) = *(src + d);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
