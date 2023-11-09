#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its paramters
 * @n: parameters
 * @...: parameter variable
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	unsigned int j, sum = 0;

	va_start(xy, n);
	for (j = 0; j < n; j++)
		sum += va_arg(xy, int);
	va_end(xy);
	return (sum);
}
