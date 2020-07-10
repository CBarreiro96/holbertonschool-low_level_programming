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
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
