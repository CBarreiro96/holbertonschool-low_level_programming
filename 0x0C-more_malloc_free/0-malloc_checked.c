#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: Variable type of unsigned integer.
 *Return: This return pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	/* Initial memory allocation */
	str = (char *) malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
