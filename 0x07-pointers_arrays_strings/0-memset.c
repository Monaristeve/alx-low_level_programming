#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
  * @b:byte that points to the memory s
  * @s: function paramater 1
  * @n: function parameter 2
  ** Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
