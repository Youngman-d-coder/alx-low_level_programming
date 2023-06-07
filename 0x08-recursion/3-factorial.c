#include "main.h"

/**
 * factorial - returns factorial of given number
 *
 * @n: given number
 *
 * Return: factorial of number on success, -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
