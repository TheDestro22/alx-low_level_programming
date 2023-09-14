#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entery point
 *
 * Description: false or ture validation
 *
 * @i: int to be checked
 *
 * Return: 0 (success)
*/

void positive_or_negative(int i);
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
	return (0);
}
