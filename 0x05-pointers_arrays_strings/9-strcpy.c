#include "holberton.h"
/**
 **_strcpy - Copy string
 *@dest:char tpe string
 *@src:char type string
 *Description: It copy one array with string in other string.
 *Return: Return the variable dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}
