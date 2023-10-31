#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return:  pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int s1length = 0;
	int s2length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
		s1length++;
	for (a = 0 ; s2[a] != '\0' ; a++)
		s2length++;
	result = malloc(sizeof(char) * (s2length + s1length) + 1);
	if (result == NULL)
		return (NULL);
	for (a = 0 ; s1[a] != '\0' ; a++)
		result[a] = s1[a];
	for (a = 0 ; s2[a] != '\0' ; a++)
		result[s1length + a] = s2[a];
	return (result);
}
