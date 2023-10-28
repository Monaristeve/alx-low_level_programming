#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, m, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && num >= 0; m++)
	{
		while (num >= coins[m])
		{
			result++;
			num -= coins[m];
		}
	}
	printf("%d\n", result);
	return (0);
}
