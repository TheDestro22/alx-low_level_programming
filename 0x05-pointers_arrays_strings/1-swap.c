#include "main.h"

/**
 * swap_int - swap the value of two integers
 *
 * @a: pointer for an integer
 * @b: pointer for an intger
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int ah = *a;
	int bh = *b;

	*a = bh;
	*b = ah;
}
