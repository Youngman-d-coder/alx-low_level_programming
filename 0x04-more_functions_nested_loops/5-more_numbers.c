#include "main.h"

/**
 * more_numbers - prints from 1 to 14 ten times
 */
void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
				_putchar('1');
			}
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
