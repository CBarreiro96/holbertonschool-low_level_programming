#include "holberton.h"
/**
 *print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 *@a: Bidimentional array.
 *@size: Variable type of integer,
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int suma = 0;
	int Size = size * size;

	while (i < Size)
	{
		if (i % (size + 1) == 0)
		{
			suma += a[i];
		}

		i++;
	}

	printf("%d, ", suma);

	suma=0;
	i = 0;

	while (i < Size)
	{
		if (i % (size-1) == 0 && i != (Size-1))
		{
			suma += a[i];
		}
		i++;
	}
	printf("%d\n", suma);
}
