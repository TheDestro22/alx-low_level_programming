#include "main.h"

/**
 * print_sign - checks for alphabetic character
 * @n: The character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
