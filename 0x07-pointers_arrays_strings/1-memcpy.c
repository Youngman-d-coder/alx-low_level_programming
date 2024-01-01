#include "main.h"

/**
 * _memcpy - copies n from src to dest
 *
 * @dest: pointer to destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to memory destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
