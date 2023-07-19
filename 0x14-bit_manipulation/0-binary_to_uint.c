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
	unsigned int result;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '\0' && *b != '1')
			return (0);

		result = result << 1;

		if (*b == '1')
			result = result | 1;

		b++;
	}

	return (result);
}
