#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 *
 * @n: number of paramters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total;
	va_list p;

	total = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(p, int);
	}

	va_end(p);

	return (total);
}
