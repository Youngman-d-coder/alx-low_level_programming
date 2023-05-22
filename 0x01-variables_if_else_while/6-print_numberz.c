#include <stdio.h>

/**
 * main - code runs from here
 *
 * Description: prints numbers using putchar function
 *
 * Return: always zero (0) on success
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
