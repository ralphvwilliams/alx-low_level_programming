#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: Always 0
*/
void print_alphabet_x10(void)
{
int i = 0, j;

while (i < 10)
{
j = 97;

while (j < 123)
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
