#include "main.h"

/**
 * _strpbrk - locates first occurrence in string s in strig accept.
 *
 * @s: pointer to string to search.
 * @accept: pointer to bytes to search for.
 *
 * Return: pointer to the byte in s thaat matches or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}
