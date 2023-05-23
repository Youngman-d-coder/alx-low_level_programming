#include "main.h"

/**
 * print_alphabet - entry point
 *
 * @alpha: contains alphabet characters
 *
 * Description: Prints the alphabets
 *
 * Return: zero on success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
