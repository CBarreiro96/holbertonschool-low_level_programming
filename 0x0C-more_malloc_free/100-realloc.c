#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: Pointer typr of pointer.
  *@old_size: Variable type unsigned
  *@new_size: New size of malloc
  *Return:return the varible.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	copy = ptr;

	for (i = 0; i < old_size; i++)
		a[i] = copy[i];
	free(ptr);
	return (a);
}
