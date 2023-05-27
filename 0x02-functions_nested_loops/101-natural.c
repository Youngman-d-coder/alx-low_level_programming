#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints sum of the multiples of 3 and 5 below 1024
 *
 * Return: zero (0) on success
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			m += n;
		}
	}
	printf("%d\n", m);

	return (0);
}
