#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: Always 0
*/
void print_alphabet_x10(void)
{
    int i = 0, j;

    while(i < 10)
    {
        print_alphabet();
        i++;
    }
}