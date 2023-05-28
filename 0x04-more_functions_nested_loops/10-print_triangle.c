#inclde "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: length and base of triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= size; x++)
		{
			if (y == size - 1)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
