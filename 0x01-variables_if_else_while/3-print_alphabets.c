#include <stdio.h>

/**
 * main - Main entry
 *
 * Description: prints the alphabets
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int C;
	for (C = 97; C <= 122; C++)
	{
		putchar(C);
	}
	for (C = 65; C <= 90; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
