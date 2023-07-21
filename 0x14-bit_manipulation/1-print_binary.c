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

	cove = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (cove > 0)
	{
		if (n & cove)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1 || cove == 1)
			putchar('0');

		cove >>= 1;
	}
}
