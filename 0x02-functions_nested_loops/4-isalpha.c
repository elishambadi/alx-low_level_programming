#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_putchar - prints a character
 *@c: - character to be printed
 *
 *Return: void
 */
void _putchar(char c);

/**
 *_isalpha - checks if part of alphabets
 *@c: int to check
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
