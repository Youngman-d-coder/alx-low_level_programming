#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched through
 *
 * @size: number of elements of array
 *
 * @cmp: function pointer
 *
 * Return: -1 if no element matches, -1 if size is less than 0ssc
 * index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	
	return (-1);
}
