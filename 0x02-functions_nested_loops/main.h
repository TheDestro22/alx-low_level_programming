#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
int _putchar(char c);
void print_alphabet(void)
{
        for(char letter = 'a'; letter <= 'z'; letter++)
        {
        _putchar(letter);
        }
        _putchar('\n');
}

#endif
