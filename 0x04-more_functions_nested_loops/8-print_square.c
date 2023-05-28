#include "main.h"

/**
 * print_square - prints square the size of "size"
 *
 * @size: size of square
 */
void print_square(int size)
{
	int s, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
