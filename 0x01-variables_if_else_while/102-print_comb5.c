#include <stdio.h>

/**
 * main - code begins here
 *
 * Description: all posible 2 digit combo of numbers
 *
 * Return: zero (0) on success
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 99; num_1++)
	{
		for (num_2 = 0; num_2 <= 99; num_2++)
		{
			if (num_2 > num_1)
			{
				putchar((num_1 / 10) + 48);
				putchar((num_1 % 10) + 48);
				putchar(' ');
				putchar((num_2 / 10) + 48);
				putchar((num_2 % 10) + 48);
				if (num_1 != 98 || num_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
