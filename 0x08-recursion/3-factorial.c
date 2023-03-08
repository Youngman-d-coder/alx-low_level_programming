#include "main.h"

/**
 * factorial - calculates a numbers factorial
 * @n: number to get factorial of
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1)
	if (n == 0)
		return (0)
	return (n * factorial(n - 1))
}
