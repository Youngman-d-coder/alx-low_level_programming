#include <stdio.h>

/**
 * main -Code entry point
 *
 * Description: prints the alphabets and skips e and q
 *
 * Return: Always returns zero (0) on success
 */
int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 101 || alpha == 113)
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
