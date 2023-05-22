#include <stdio.h>

/**
 * main - code entry
 *
 * Description: prints possible combinations of 3 digit numbers
 *
 * Return: zero on success
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 48; num_1 <= 57; num_1++)
	{
		for (num_2 = 49; num_2 <= 57; num_2++)
		{
			for (num_3 = 50; num_3 <= 57; num_3++)
			{
				if (num_3 > num_2 && num_2 > num_1)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);
					if (num_1 != 55 || num_2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
