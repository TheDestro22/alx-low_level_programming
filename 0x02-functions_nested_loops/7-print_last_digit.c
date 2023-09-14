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
	int lastdigit;

	if (n > 10)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = n + n * -2;
		lastdigit = n % 10;
		_putchar('0' + lastdigit);
		return (lastdigit);
	}
	else
	{
		_putchar('0' + n);
		return (n);
	}
}

