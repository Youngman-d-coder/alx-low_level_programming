#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints number combos from 1 to 89
 *
 * Return: zero (0) on success
 */
int main(void)
{
	int b_num, s_num;

	for (b_num = 48; b_num <= 57; b_num++)
	{
		for (s_num = 48; s_num <= 57; s_num++)
		{
			if (s_num > b_num)
			{
				putchar(b_num);
				putchar(s_num);
				if (b_num != 56 || s_num != 57)
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
