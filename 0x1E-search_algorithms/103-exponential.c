#include "search_algos.h"

/**
 * binary_searchEx - searches for a value with binary search
 * @array: pointer to the first element of the array to search in
 * @start: left boundary
 * @end: right bounday
 * @objetive: value to search for
 * Return: Index where value is located or -1
 */
int binary_searchEx(int *array, int start, int end, int objetive)
{
	size_t middle;
	int i;

	if (!array)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);
		middle = (start + end) / 2;
		if (array[middle] < objetive)
			start = middle + 1;
		else if (array[middle] > objetive)
			end = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
/**
 * exponential_search - searches for a value with exponential
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range;
	int end, objetive = value;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	range = 1;

	while (range < size && array[range] < objetive)
	{
		printf("Value checked array[%lu] = [%d]\n", range, array[range]);
		range *= 2;
	}

	if ((size - 1) < range)
		end = size - 1;
	else
		end = range;

	printf("Value found between indexes [%lu] and [%d]\n", range / 2, end);

	/*Call binary search for the found range*/
	return (binary_searchEx(array, range / 2, end, objetive));
}
