#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  * @s: parameter 1
  * @c: parameter 2
  * Return: 0
  */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (s + z);
	}

	return (0);
}
