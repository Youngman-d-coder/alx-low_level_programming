#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string argument
 */
void print_rev(char *s)
{
	int l, i;

	if (*s == '\0')
	{
		return;
	}

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
