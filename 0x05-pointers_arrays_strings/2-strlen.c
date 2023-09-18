#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: pointer for a char
 *
 * Return: An integer
*/

int _strlen(char *s)
{
	_putchar("0" + *s / 10);
	_putchar("0" + *s % 10);
}
