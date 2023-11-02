#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int a, quantity;
	int *pointer;

	if (min > max)
		return (NULL);
	quantity = max - min + 1;
	pointer = malloc(sizeof(int) * quantity);
	if (pointer == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		pointer[a] = min++;
	return (pointer);
}
