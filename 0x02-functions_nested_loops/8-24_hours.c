#include "main.h"

/**
 * jack_bauer - jack_bauer
 * Description: Prints timer count down
 * Return: 00:00 timer
 */

void jack_bauer(void)
{
int hr = 0;
int mn;

while(hr < 24)
{
mn = 0;
while (mn < 60)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((mn / 10) + '0');
_putchar((mn % 10) + '0');
_putchar('\n');
mn++;
}
hr++;
}
}
