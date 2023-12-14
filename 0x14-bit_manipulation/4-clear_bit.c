#include "main.h"

/**
 * clear_bit - sets bit value to 0 at given index
 *
 * @n: pointer to where bit needs to be cleared
 * @index: Index of bit to be cleared
 *
 * Return: 1 on success, -1 if an error occurrs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Clear the value of the bit at the index to 0 */
	*n = (*n) & ~(1UL << index);

	/* Return 1 on success */
	return (1);
}
