#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: array to be iterated through
 *
 * @size: size of array
 *
 * @action: function to be called
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
