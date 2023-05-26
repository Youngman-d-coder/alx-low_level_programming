#include "main.h"

/**
 * print_to_98 - prints numbers from any point towards 98
 *
 * @n: the number to print from
 */
void print_to_98(int n)
{
	int H, L;

	if (n <= 98)
	{
		for (L = n; L <= 98; L++)
		{
			if (L != 98)
			{
				printf("%d, ", L);
			}
			else
			{
				printf("%d\n", L);
			}
		}
	}
	else
	{
		for (H = n; H >= 98; H--)
		{
			if (H != 98)
			{
				printf("%d, ", H);
			}
			else
			{
				printf("%d\n", H);
			}
		}
	}
}
