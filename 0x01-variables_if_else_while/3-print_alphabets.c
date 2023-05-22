#include <stdio.h>

/**
 * main -Code entry point
 *
 * Description: prints lowercase alphabets and uppercase alpabets
 *
 * Return: Always returns zero (0) on success
 */
int main(void)
{
        int alpha;

        for (alpha = 97; alpha <= 122; alpha++)
        {
                putchar(alpha);
        }
	for (alpha = 65; alpha <= 90; alpha++)
	{
		putchar(alpha);
	}
        putchar('\n');

        return (0);
}

