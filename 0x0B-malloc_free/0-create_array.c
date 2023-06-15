#include "main.h"

/**
 * create_array - creeates an array of characters
 * initializing with a specific char
 *
 * @size: size of array
 *
 * @c: initializer
 *
 * Return: pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(sizepo(char) * size);

	if (string == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		string[i] = c;
		i++;
	}

	return (string);
}
