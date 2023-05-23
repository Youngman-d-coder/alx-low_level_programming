#include "main.h"

/**
 * print_last_digit - program begins here
 *
 * @f: number to be checked
 * Description: checks for number last digit
 *
 * Return: returns value of f
 */
int print_last_digit(int f)
{
	int ld;

	if (f < 0)
	{
		f = -f;
	}

	ld = f % 10;

	if (ld < 0)
	{
		ld = -ld;
	}

	_putchar(ld + '0');

	return (ld);
}
