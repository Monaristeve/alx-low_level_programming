#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: represents number of compile line arguments
 * @argv: represents an array that contains command line arguments
 * Return: o
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
