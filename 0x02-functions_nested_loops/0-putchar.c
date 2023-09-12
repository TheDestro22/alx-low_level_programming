#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description : A file that prints the phrase
 *	(_putchar)
 *
 * Return : 0 (success)
*/

int main(void)
{
	write(1, "_putchar\n", 8);
	return 0;
}
