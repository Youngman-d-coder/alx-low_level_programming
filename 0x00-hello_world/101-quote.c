#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point for program
 *
 * Description: prints string without using "printf","puts" or relatives
 * Return: standard error one (1)
 */
int main(void)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (0);
}
