#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 *
 * @n: the number to be divided
 * @othern: the number to be divided by
 *
 * Return: 1 if prime, 0 if not
*/

int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - find square root
 *
 * @n: the number to be divided
 * @othern: the number to be divided by
 *
 * Return: 1 if prime, 0 if not
*/

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
		return (1);
	else if (n % othern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othern + 1));
}
