#include "main.h"

/**
 * _puts_recursion - pritns a string, followed by a new line
 *
 * @s: recieves the string input 
 *
 * Return: Nothing
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion(*s);
}
