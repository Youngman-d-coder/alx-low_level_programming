#include "main.h"

/**
 * print_sign - main code
 *
 * @n: number to check
 * Description: checks for the sign of a number
 *
 * Return: (1) if > (0) (0) if == (0) (-1) if < (0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
