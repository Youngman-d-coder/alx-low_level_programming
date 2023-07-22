#include "main.h"

/**
 * get_endianness - checks machine endianess
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return ((*ptr == 1) ? 1 : 0);
}
