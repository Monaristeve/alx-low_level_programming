#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that generates random valid passwords for
 * the program 101-crackme.
 * Return: 0
 */
int main(void)
{
	int pass[100];
	int q, sum, m;

	sum = 0;

	srand(time(NULL));

	for (q = 0; q < 100; q++)
	{
	pass[q] = rand() % 78;
	sum += (pass[q] + '0');
	putchar(pass[q] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	m = 2772 - sum - '0';
	sum += m;
	putchar(m + '0');
	break;
	}
	}

	return (0);
}
