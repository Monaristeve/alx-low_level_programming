#include "main.h"

/**
  * _strspn -  a function that gets the length of a prefix substring
  * @s: parameter 1
  * @accept: parameter 2
  * Return: 0
  */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int _strspn(char *s, char *accept);
	unsigned int j = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				j++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (j);
		}
		s++;
	}

	return (j);
}
