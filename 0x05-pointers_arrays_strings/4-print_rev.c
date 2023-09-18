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

*s = '\0';

for (; *s != 0; s--)
	_putchar(*s);
_putchar('\n');

}
