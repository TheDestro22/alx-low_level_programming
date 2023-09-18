#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: pointer for a character
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (*s > 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
