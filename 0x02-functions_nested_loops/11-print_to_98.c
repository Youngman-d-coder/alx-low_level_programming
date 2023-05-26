#include "main.h"

/**
 * print_to_98 - prints numbers from any point towards 98
 */
void print_to_98(int n)
{
	int m;

	m = 98;

	if (n != m)
	{
		while (n < m)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}

		while (n > m)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
