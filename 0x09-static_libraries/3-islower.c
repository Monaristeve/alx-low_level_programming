#include "main.h"


/**
 * _islower - programme entry point
 *main - function that checks for lowercase character
 *@c:lowercase character pointer
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
