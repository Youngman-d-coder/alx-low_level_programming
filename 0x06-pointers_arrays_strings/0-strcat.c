#include "main.h"

/**
 * _strcat - concats two string
 *
 * @dest: string destination
 * @src: string source
 *
 * Return: void on success
 */
char *_strcat(char *dest, char *src)
{
	int w, x;

	x = 0;
	while (dest[x] != '\0')
	{
		x++
	}

	w = 0;
	for (src[w] != '\0')
	{
		dest[x] = src[w];
		x++;
		w++;
	}

	dest[x] = '\0';
	return (dest);
}
