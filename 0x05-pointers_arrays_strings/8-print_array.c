#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: array from where the elements are printed
 * Return: 0
 *
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n ; z++)
	{
		printf("%d", a[z]);
		if (z < n - 1)
			printf(", ");
	}
	printf("\n");
}
