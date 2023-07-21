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

	cover = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	res = (n & cover) ? 1 : 0;
	return (res);
}
