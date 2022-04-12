#include <stdio.h>

/**
 *_putchar - prints a character
 *&char c - character to be printed
 *
 *Return: void
 */
void _putchar(char c);

/**
 *print_alphabet - prints the alphabet
 *
 *Return: 0 to terminate program
 */
void print_alphabet(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 0;

	while (i < 26)
	{
		char b = alpha[i];

		_putchar(b);
		i++;
	}
	_putchar('\n');
}
