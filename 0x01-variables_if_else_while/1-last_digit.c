#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/**
 * main - entry point for program
 *
 * Description: checks for the last digit of n
 *
 * Return: Always zero (0) on success
 */
int main(void)
{
	int n, lst;
	char msg[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst = n % 10;
	if (lst > 5)
	{
		strcpy(msg, "and is greater than 5");
	}
	else if (lst < 6 && lst != 0)
	{
		strcpy(msg, "and is less than 6 and not 0");
	}
	else
	{
		strcpy(msg, "and is 0");
	}
	printf("Last digit of %d is %d %s\n", n, lst, msg);

	return (0);
}
