
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, jump, prev;
	int objetive;

	objetive = value;

	if (!array && size <= 0)
		return (-1);

	jump = 0, prev = 0;
	step = sqrt(size);

	while (jump < size && array[jump] < objetive)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	if (jump > (size - 1))
		jump = size - 1;

	while (prev <= jump && array[prev] <= objetive)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == objetive)
			return (prev);
		prev++;
	}
	return (-1);
}
