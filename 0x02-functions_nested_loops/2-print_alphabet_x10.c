#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in	 *	lower case 10 times
*/

void print_alphabet_x10(void)
{
	int ch, count;

	for (count = 0 ; count < 10 ; count++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

	}
}
