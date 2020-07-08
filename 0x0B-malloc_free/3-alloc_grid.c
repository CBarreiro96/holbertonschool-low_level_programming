#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allow dinamyc memory */
	x = (int **)calloc(width, sizeof(int *));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		x[i] = (int *)calloc(height, sizeof(int));

		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(x[i]);
			}
			free(x[i]);
			return (NULL);
		}
	}
	return (x);

}
