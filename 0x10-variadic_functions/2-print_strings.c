#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed in between
 *
 * @n: number of strings printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *x;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(va, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(va);
}
