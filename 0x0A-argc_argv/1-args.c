#include <stdio.h>

/**
 * main - a program that prints ir=ts name followed by a new line
 * @argc: represents number of compile line arguments
 * @argv: represents an array that contains command line arguments
 * Return: o
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
