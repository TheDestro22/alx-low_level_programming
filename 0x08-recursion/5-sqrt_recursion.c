#include "main.h"

/**
 * _sqrt_recursion - returns the function square
 *
 * @n: recieves the int input
 * @val: square root
 *
 * Return: the natural sqaure root of a number
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 *
 * @n: the number that we want to find the square root for
 * @val: square root
 *
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
