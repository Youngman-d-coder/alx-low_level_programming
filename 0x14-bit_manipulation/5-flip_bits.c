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
	unsigned long int xor_res = n ^ m;
	unsigned int total = 0;

	while (xor_res > 0)
	{
		total += xor_res & 1;
		xor_res >>= 1;
	}

	return (total);
}
