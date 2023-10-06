#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: 0 when n is equal to zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative",n);
	else if (n > 0)
		printf("%d is positive",n);
	return (0);
}
