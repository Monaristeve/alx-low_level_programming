#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - a function that prints the sum of the two diagonals
  * of a square matrix of integers.
  * @size: parameter 1
  * @a: parameter 2
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int b;

	count1 = 0;
	count2 = 0;

	for (b = 0; b < size; b++)
	{
	count1 = count1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
	count2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
