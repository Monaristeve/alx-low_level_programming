#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number parameter
 * @m: second number parameter
 * Return: number of bits you would need to flip to get from one number
 * to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, add = 0;
	unsigned long int present;
	unsigned long int excl = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		present = excl >> j;
		if (present & 1)
			add++;
	}
	return (add);
}
