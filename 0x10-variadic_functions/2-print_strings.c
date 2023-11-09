#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a program that prints strings followed by a new line
 * @separator: string to be printed between the  strings
 * @n: number of strings
 * @...: string variables
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list strings;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
