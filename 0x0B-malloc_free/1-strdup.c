#include "main.h"

/**
 * _strdup - function returning  a pointer to a newly allocated space in memory
 * @str: a string to be copied to new memory
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int tally = 0;
	int a;
	char *duplicate;

	duplicate = malloc(sizeof(char) * tally + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
		tally++;
	if (duplicate == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
		duplicate[a] = str[a];
	return (duplicate);
}
