#include <stdio.h>
#include "main.h"

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
void print_alphabet_x10(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 0;
	int j = 0;

	while(j <= 9)
	{
		while (i < 26)
		{
			char b = alpha[i];

			_putchar(b);
			i++;
		}
		j++;
		i = 0;
		_putchar('\n');
	}
}
