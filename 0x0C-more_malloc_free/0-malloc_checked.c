#include "holberton.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *str;

	/* Initial memory allocation */
	str = (char*) malloc(b);
	if (str == NULL)
		exit (98);

	return (str);
}
