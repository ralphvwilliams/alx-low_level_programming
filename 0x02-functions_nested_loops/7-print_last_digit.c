#include "main.h"

int print_last_digit(int n)
{
if (n < 0)
return (-1 * n % 10);
else
return (n % 10);
}