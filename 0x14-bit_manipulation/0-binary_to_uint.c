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

	if (b == NULL)
		return (0);

	length = 0;
	while (b[length] != '\0')
		length++;

	for (a = length - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		if (b[a] == '1')
			result += bit;

		bit = bit << 1;
	}

	return (result);
}
