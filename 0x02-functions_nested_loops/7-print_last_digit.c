#include "main.h"

/**
* print_last_digit - prints last digit of an integer
* @n: Integer
* Return: last digit of integer
**/
int print_last_digit(int n)
{
if (n < 0)
return (-1 * n % 10);
else
return (n % 10);
}
