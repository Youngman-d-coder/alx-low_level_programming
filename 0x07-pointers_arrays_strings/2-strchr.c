#include "main.h"

/**
 * _strchr- locates char in str
 *
 * @s: pointer to the string 
 * @c: char to locate
 *
 * Return: pointer to first occurence of char in s,
 * or NULL if Char is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (NULL);
}
