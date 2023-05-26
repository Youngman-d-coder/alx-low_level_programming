#include "main.h"
/**
 * positive_or_negative - main code block
 *
 * @n: Collects random data and states whether positive or negative
 *
 * Return: always 0 (success)
 */

void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
