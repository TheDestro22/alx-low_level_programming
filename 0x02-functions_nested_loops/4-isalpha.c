#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
