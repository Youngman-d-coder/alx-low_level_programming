#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: length and base of triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');
			}

			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
