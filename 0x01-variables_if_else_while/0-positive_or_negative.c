#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/**
 * main - code entry point
 *
 * Description: prints a random number and states if negative or positive
 *
 * Return: Always zero (0) on success
 */
int main(void)
{
	int n;
	char str[13];


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		strcpy(str, "is positive");
	}
	else if (n == 0)
	{
		strcpy(str, "is zero");
	}
	else
	{
		strcpy(str, "is negative");
	}
	printf("%d %s\n", n, str);

	return (0);
}
