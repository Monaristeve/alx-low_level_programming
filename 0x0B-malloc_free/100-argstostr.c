#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer parameter
 * @av: array double pointer
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int j, m, q = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			y++;
	}
	y += ac;
	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
		{
			str[q] = av[j][m];
			q++;
		}
		if (str[q] == '\0')
		{
			str[q++] = '\n';
		}
	}
	return (str);
}
