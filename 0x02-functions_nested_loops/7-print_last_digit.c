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
	n = n % 10;
	write(1, n, 1);
	return (n);
}

