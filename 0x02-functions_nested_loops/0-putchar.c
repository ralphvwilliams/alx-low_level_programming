#include "main.h"

/**
* Prints the word '_putchar'
* Adds a new line to the end of the file
**/
int main(void) 
{
	char s[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int length = 8;
	int i = 0;
	while(i < length) 
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return 0;
}
