#include <stdio.h>
#include <string.h>

/**
 * main - entry point of program
 *
 * Description: prints a string using "printf"
 *
 * Return: always zero (0) on success
 */
int main(void)
{
	char sent[60];

	strcpy(sent, "with proper grammar, but the outcome is a piece of art,");

	printf("%s\n", sent);

	return (0);
}
