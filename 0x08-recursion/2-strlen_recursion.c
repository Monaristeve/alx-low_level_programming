#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string
  * @s: string parameter
  * Return:  the length of a string
  */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
