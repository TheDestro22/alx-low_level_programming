#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: recieves the string input
 *
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

	counter++;
	if (*s == '\0')
	{
		return (counter);
	}
	else
	{
		_strlen_recursion(s + 1);
		return (counter);
	}
}
