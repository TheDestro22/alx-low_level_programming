#include "main.h"

/**
 * main - Entry point
 *
 * Description : A file that prints the phrase
 *      (_putchar)
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
        for(char letter = 'a'; letter <= 'z'; letter++)
        {
        _putchar(letter);
        }
        _putchar('\n');
}

int main(void)
{
	void print_alphabet(void);
	return (0);
}
