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
	*a = &*b;
	*b = &*a;
}
