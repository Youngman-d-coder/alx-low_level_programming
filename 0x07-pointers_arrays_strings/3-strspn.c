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
	int match;

	while (*s != '\0')
	{
		match = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}

		if (match == 0)
			break;

		s++;
	}

	return (count);
}
