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
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);

}

