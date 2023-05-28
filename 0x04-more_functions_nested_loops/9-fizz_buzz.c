#include "main.h"

/**
 * main - code entry point
 *
 * Description: print number 1 to 100 with a little fizz and buzz
 *
 * Return: zero on success
 */
int main(void)
{
	int tot, num;

	tot = 101;

	for (num = 1; num < tot; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num == 1)
		{
			printf("%d ", num);
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
