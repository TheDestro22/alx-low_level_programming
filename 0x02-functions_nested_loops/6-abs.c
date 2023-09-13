#include "main.h"

/**
 * _abs - Write a function that computes the
 * absolute value of an integer.
 *
 * @n: The character to be checked
 *
 * Return: the absoulte value of n
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n = n + (n * -2);
		return (n);
	}
}
