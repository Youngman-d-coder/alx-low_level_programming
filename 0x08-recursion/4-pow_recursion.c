#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: value to be raised
 * @y: power to raise
 *
 * Return: -1 if y < 0, and 1 if is equal to 0,
 * and the value of x raised by y on success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
