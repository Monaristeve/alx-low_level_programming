#include "main.h"
#include <stdio.h>

/**
 * rot13 - main  a function that encodes a string using rot13
 * @a: pointer to a string
 * Return: encoded string
 *
 */

char *rot13(char *a)
{
	int b, c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
	for (c = 0; c < 52; c++)
	{
	if (a[b] == data1[c])
	{
	a[b] = datarot[c];
	break;
	}
	}
	}
	return (a);
}

