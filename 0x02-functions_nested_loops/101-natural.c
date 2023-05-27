#include "main.h"

/**
 * nat_num - prints sum of the multiples of 3 and 5 below 1024
 *
 * Return: zero (0) on success
 */
int nat_nums(void)
{
	int n, m;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			m = m + n;
			printf("%d", n);
		}
	}
	printf("%d", m);
}

