#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest:  being abbeded to by src
 * @src: abbended to
 *
 * Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		_putchar(*dest);
		dest++;
	}
	_putchar('\n');

	while (*src != '\0')
	{
		_putchar(*src);
		src++;
	}
	return (*dest);
}

