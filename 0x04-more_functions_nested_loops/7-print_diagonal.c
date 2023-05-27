#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: number of iterations
 */
void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			if (c == 0 || c == n)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
