#include "main.h"

/**
 * _isdigit - checks for uppercase character
 *
 * @c: checks for input
 *
 * Return: 1 if c is uppercase , 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
