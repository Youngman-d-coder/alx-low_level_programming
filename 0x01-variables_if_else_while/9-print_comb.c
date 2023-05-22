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
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
        }
        putchar('\n');

        return (0);
}

