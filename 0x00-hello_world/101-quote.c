#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point for program
 *
 * @str: Quote by Dora Korpar
 * Description: prints string without using "printf","puts" or relatives
 * Return: standard error one (1)
 */
int main(void)
{
	char str[70];

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";

	write(str, strlen(str));

	return (0);
}
