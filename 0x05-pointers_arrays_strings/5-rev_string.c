#include "main.h"

/**
 * rev_string - prints a string in reverse, followed by a new line
 *
 * @s: pointer for a character
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	while (*s != '\0')
	{
		s++;
		_putchar(*s);
		
	}

	_putchar('\n');
	s--;

	/*while (*s > 0)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');*/
}
