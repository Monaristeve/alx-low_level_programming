#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2d  array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		result[a] = malloc(sizeof(int) * width);
		if (result[a] == NULL)
		{
			for (; a >= 0; a--)
				free(result[a]);
			free(result);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			result[a][b] = 0;
	}
	return (result);
}
