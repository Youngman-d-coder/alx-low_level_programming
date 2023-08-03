#include "main.h"

/**
 * print_binary - prints the binary representation of any number
 *
 * @n: given number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int cove;
	int flag = 0;

	/* Initialize cove to 1 followed by 7 0's */
	cove = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	/* Iterate through cove from right to left */
	while (cove > 0)
	{
		/* Check if the current bit of n is 1 */
		if (n & cove)
		{
			/* Print a 1 if the current bit of n is 1 */
			putchar('1');
			flag = 1;
		}
		else if (flag == 1 || cove == 1)
		{
/*Print a 0 the current bitof n is 0 or if we have reached the end of cove*/
			putchar('0');
		}

		/* Shift cove to the left */
		cove >>= 1;
	}
}
