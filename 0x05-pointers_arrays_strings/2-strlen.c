#include "main"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter taken
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
