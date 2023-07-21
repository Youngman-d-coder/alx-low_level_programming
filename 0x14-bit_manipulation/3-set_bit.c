#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 *
 * @n: pointer to number
 * @index: index of given bit
 *
 * Return: 1 on success, -1 if any error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n) | (1UL << index);
	return (1);
}
