#include "search_algos.h"

/**
 * print_array - print the current array given rules on format
 * @array: array to print
 * @inc: starting incrementer index
 * @size: increment up to this size
 */
void print_array(int *array, size_t inc, size_t size)
{
	printf("Searching in array: ");
	for (; inc <= size; inc++)
	{
		printf("%d", array[inc]);
		if (inc < size)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search a ascending sorted array to find a value.
 * No duplicates in array. Must print subarray each split.
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value in array or -1 if error or not found
 */
int binary_search(int *array, size_t size, int value)
{
	int begin, Final, midpoint, objetive;

	objetive = value;
	Final = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	begin = 0;
	/*Search for midpoints in the array*/
	while (begin <= Final)
	{
		print_array(array, begin, Final);
		midpoint = (begin + Final) / 2;
		if (array[midpoint] == objetive)
			return (midpoint);
		else if (array[midpoint] < objetive)
			begin = midpoint + 1;
		else
			Final = Final - 1;

	}

	return (-1);

}

