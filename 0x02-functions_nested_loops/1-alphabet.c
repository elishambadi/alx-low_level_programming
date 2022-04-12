#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i = 0;
	char b;

	while (i < 26)
	{
		b = alpha[i];

		_putchar(b);
		i++;
	}
	_putchar('\n');
}
