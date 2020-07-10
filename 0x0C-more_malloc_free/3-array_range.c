#include <stdlib.h>
#include <string.h>
/**
 *array_range - function that creates an array of integers.
 *@min: Variable type of integer
 *@max:Variable type of integer.
 *Return:return pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
