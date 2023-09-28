#include "main.h"

/**
 * _print_rev_recursion - pritns a string in reverse,
 * followed by a new line
 *
 * @s: recieves the string input
 *
 * Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		 _print_rev_recursion(s + 1);
		 _putchar(*s);
	}
}
