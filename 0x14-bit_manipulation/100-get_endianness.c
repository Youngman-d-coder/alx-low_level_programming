#include "main.h"

/**
 * get_endianness - checks machine endianess
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	/* num is a 32-bit unsigned integer */
	unsigned int num = 1;

	/* ptr is a pointer to the first byte of num */
	char *ptr = (char *)&num;

	/* Return 1 if the first byte of num is 1, 0 otherwise */
	return ((*ptr == 1) ? 1 : 0);
}
