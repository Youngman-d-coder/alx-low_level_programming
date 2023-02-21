#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: prints the alphabets in small letters
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int C;

	for (C = 97; C <= 122; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
