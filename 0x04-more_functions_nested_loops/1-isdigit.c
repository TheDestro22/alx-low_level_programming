#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: checks for input
 *
 * Return: 1 if c is uppercase , 0 otherwise
*/

int _isdigit(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
