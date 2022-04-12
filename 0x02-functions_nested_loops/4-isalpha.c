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
 *print_alphabet - prints the alphabet
 *
 *Return: 0 to terminate program
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
