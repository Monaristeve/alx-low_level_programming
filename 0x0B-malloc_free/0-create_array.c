#include "main.h"

/**
 * create_array - a programe that creates an array
 * @size: size of the created array
 * @c: character parameter to be stored in the array
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (a = 0 ; a < size ; a++)
		array[a] = c;
	return (array);
}
