#include "main.h"

/**
 * get_bit - Gets the value of bit at given index.
 *
 * @n: number bit is extracted from.
 * @index: Index of bit to be extracted.
 *
 * Return: res or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cover, res;

	/* Initialize cover to 1 followed by (index - 1) 0's */
	cover = 1UL << index;

	/* Check if the index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Get the value of the bit at the index */
	res = (n & cover) ? 1 : 0;

	/* Return the value of the bit */
	return (res);
}
