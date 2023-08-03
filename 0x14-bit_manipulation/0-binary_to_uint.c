#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: number to be converted
 *
 * Return: returns result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit = 1;
	int a, length;

	/* Check if the input is NULL */
	if (b == NULL)
		return (0);

	/* Get th length of the input */
	length = 0;
	while (b[length] != '\0')
		length++;

	/* Iterate through the input from right to left */
	for (a = length - 1; a >= 0; a--)
	{
		/* Check if the current character is not '0' or '1' */
		if (b[a] != '0' && b[a] != '1')
			return (0);

		/* If the current character is '1', add 'bit' to the result */
		if (b[a] == '1')
			result += bit;

		/* Shift 'bit' to the left */
		bit = bit << 1;
	}

	/* Return the result */
	return (result);
}
