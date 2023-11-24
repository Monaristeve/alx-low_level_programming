#include "main.h"
/**
 * binary_to_uint - program that converts a binary number to unsigned int
 * @b: pointer to the string containing binary numbers
 * Return: the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal = 2 * decimal + (b[j] - '0');
	}
	return (decimal);
}
