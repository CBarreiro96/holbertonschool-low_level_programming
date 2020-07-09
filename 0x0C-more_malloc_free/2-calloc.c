#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: Variable type of unsigned integer
 *@size: Variable typr of integer
 *Return: return pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = (char *)calloc(nmemb, size);
	if (a == NULL)
		return (NULL);
	return (a);
}
