#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string printed between numbers
 *
 * @n: number of integers passed into functions
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}
