#include "main.h"

int main(void) {
	char s[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int length = 8;
	int i = 0;
	while(i < length) {
		_putchar(s[i]);
		i++;
	}
	return 0;
}
