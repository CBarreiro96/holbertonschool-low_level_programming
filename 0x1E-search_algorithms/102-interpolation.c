#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
/*In this algorithm we ar focus in the calculation pos to find the objetive*/
	size_t pos = 0, end = size - 1, start = 0;
	int objetive = value;

	if (!array && size <= 0)
		return (-1);

	while (start < end)
	{
		/*Equation to calculate pos = position*/
		pos = start + (((double)(end - start) /
			      (array[end] - array[start])) * (objetive - array[start]));

		if (pos > end)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (pos == 0 && array[pos] > objetive)
			return (-1);
		if (array[pos] > objetive)
			end = pos - 1;
		else if (array[pos] < objetive)
			start = pos + 1;
		else
			return (pos);
	}
	if (array[start] == objetive)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		return (start);
	}
	return (-1);
}
