#include "main.h"
#include <stdio.h>

/**
 * _strlen - is a function that returns the length of a string
 * @s: this is the string to be counted
 * Return: the count of the string
 *
 */
int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0 ; s[j] != '\0' ; j++)
		count++;
	return (count);
}
