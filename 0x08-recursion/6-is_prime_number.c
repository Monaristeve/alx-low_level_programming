#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the input integer is a prime
 *  number, otherwise returns 0
 * @n: integer parameter
 * Return: 1 if n is a prime number,else 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - a number that evaluates whether a number is prime repeatedly
 * @n: number to be determined
 * @i: recursive value
 * Return: 1 if n is prime, else return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
