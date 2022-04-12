#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_putchar - prints a character
 *@c: character to be printed
 *
 *Return: void
 */
void _putchar(char c);

/**
 *_islower - checks if lowercase
 *@c: int to check
 *
 *Return: 0 to terminate program
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
