#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabets ten times
 */
void print_alphabet_x10(void)
{
        char alpha;
	int count;

	count = 0;
	while (count <= 9)
	{
        	for (alpha = 'a'; alpha <= 'z'; alpha++)
        	{
                	_putchar(alpha);
        	}
        	_putchar('\n');

		count++;
	}
}

