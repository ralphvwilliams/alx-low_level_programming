#include "main.h"

/**
* _islower - checks if a character is lowercase
* @c: character to check
* Return: 1 or 0
**/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
