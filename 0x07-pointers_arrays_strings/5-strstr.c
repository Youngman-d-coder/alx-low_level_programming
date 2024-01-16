#include "main.h"

/**
 * _strstr - locates a substring in a string.
 *
 * @haystack: pointer to the string to search.
 * @needle: pointer to substring to locate.
 *
 * Return: pointer to beginning of located substring,
 * or NULL if substring not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack, sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack++;
	}

	return (NULL);
}
