#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 except 2,4
 *
 * Return: Nothing
*/

void print_most_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		if (c == 2 || c == 4)
		{
			c++;
		}
		else
		{
			_putchar('0' + c);
			c++;
		}
	}
	_putchar('\n');
}
