#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_putchar - prints a character
 *&char c - character to be printed
 *
 *Return: void
 */
void _putchar(char c);

/**
 *_isalpha - checks the alphabet
 *&int c - int variable
 *Return: 0 to terminate program
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	return (0);
}
