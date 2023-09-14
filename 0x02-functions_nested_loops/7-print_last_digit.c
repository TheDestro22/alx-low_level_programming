#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: to be checked
 *
 * Return: the last digit of n
*/

int print_last_digit(int n)
{
	if (n > 10)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
	       	n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + n);
		return (n);
	}
}

