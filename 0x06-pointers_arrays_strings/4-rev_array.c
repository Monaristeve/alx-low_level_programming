#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: the function parameter
  *
  * @n: the function parameter
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int s, u;

	for (s = 0; s < n--; s++)
	{
		u = a[s];
		a[s] = a[n];
		a[n] = u;
	}
}

