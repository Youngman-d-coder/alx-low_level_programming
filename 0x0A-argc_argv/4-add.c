#include "main.h"

/**
 * check_num - check - string there are digit
 *
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/* Declaring variables */
	unsigned int count;

	for (count = 0; count < strlen(str); count++) /* count string */

	{
		if (!isdigit(str[count])) /* check if str there are digit */
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Print the name of the program
 *
 * @argc: Count arguments
 *
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	/* Declaring variables */
	int count, str_to_int, sum;

	sum = 0;

	for (count = 1;count < argc; count++) /* Goes through the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
			sum += str_to_int;
		}
		/* Condition if one of the number contains symbols that are not digits */
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum); /* print sum */
	return (0);
}
