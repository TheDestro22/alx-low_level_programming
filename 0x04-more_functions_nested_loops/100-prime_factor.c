#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @n: input
 *
 * Return: square root for n
 */
double _sqrt(double n)
{
	float sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints it
 *
 * @num: number to find
 */
void largest_prime_factor(long int num)
{
	int prm, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prm = 3; prm <= _sqrt(num); prm += 2)
	{
		while (num % prm == 0)
		{
			num = num / prm;
			largest = prm;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
