#include "main.h"

/*
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: the number
*/

void print_numbers(void)
{
	int c;

	for (c = 0, c < 10, c++)
	{
		_putchar('0' + c);
		return (c);
	}
}
