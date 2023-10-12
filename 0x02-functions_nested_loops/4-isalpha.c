#include "main.h"
/**
 * _isalpha - looks for alphabetic  characters
 * @c: defines function parameters
 * Return: 1 if sucessful and 0 when not succesful
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
