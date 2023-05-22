#include <stdio.h>

/**
 * main - program starts here
 *
 * Description: prints single didgit numbers
 *
 * Return: Always zero on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
