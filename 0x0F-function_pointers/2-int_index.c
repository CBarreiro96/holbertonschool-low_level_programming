#include "function_pointers.h"
/**
*int_index - Function that searches for an integer.
*@array: Pointer type of integer.
*@size:is the size of the array type int
*@cmp: function pointer that takes a int argument.
*Return: Return the the value ubication of number.
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	int i;

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
