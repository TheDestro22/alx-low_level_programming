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
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;

	return (length);
}
