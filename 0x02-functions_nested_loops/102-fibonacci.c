#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 always
 *
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int after;
	int i;

	printf("%lu, ", num1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", num2);
		after = num1 + num2;
		num1 = num2;
		num2 = after;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

