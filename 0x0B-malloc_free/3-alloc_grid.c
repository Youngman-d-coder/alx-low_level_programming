#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mac;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mac = malloc(sizeof(int *) * height);
	if (mac == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mac[x] = malloc(sizeof(int) * width);
		if (mac[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mac[x]);
			free(mac);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		mac[x][y] = 0;
	}
	return (mac);
}
