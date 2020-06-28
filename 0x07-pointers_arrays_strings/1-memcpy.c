#include "holberton.h"
/**
 *_memcpy - copy other array
 *@dest: Pointer type of char
 *@src: Pointer type of char
 *@n: Variable type of unsigned integer
 *Return: return dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
