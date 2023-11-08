#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer
 * @array: an array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return (s);
	}
	return (-1);
}
