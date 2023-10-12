#include "main.h"

/**
 * print_last_digit - entry point of the program
 *
 * main - function that prints the last digit of a number.
 *
 * @m:number whose last digit is being computed
 *
 * Return: modular 10
 */



int print_last_digit(int m)
{
	int last_digit;


	last_digit = m % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');


	return (last_digit);
}
