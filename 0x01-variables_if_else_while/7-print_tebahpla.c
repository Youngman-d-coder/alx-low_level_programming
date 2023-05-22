#include <stdio.h>

/**
 * main -Code entry point
 *
 * Description: prints the lowercase alphabets
 *
 * Return: Always returns zero (0) on success
 */
int main(void)
{
	int alpha;
	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
