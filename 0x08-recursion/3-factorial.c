#include "main.h"

/**
 * factorial - returns the lenght of a string
 *
 * @n: recieves the int input
 *
 * Return: factorial of the input
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n *= factorial(n - 1);
	}
	return (n);
}
