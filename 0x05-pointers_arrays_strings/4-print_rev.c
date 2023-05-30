#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string argument
 */
void print_rev(char *s)
{
	int l, i;

	l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	s--;

	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
