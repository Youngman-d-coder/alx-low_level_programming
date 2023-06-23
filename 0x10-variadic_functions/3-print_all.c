#include "variadic_functions.h"

/**
 * print_all - prints all
 *
 * @format: specifies type of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *c, *s = "";
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
			case 's':
				c = va_arg(args, char *);
				if (!c)
				{
					c = "(nil)";
				}
				printf("%s%s", s, c);
				break;
			default:
				i++;
				continue;
		}
		s = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
