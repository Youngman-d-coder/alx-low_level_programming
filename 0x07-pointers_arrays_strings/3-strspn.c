#include "main.h"

/**
 * _strspn - Gets length of prefix substring.
 *
 * @s: pointer to the string to search.
 * @accept: pointer to set of bytes to search for.
 *
 * Return: Number of bytes in the initial
 * segment of s which consist only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
