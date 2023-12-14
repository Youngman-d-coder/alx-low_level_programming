#include "main.h"

/**
 * flip_bits - counts the number of bits needed
 * to flip to get from 1 to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* xor_res stores the result of XORing n and m */
	unsigned long int xor_res = n ^ m;

	/* total stores the number of bits that need to be flipped */
	unsigned int total = 0;

	/* Iterate through xor_res and count the number of bits that are set */
	while (xor_res > 0)
	{
		/* If the current bit is set, add 1 to total */
		total += xor_res & 1;

		/* Shift xor_res to the right by 1 */
		xor_res >>= 1;
	}

	/* Return the value of total */
	return (total);
}
