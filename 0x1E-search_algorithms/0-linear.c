#include "search_algos.h"
/**
 *linear_search - Sequentially search an array for a value
 *@array: Pointer to first element in array to search
 *@size: Number of element in the array
 *@value: value to search for
 *Return: first index where value is located or -1 if
 *error or not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
