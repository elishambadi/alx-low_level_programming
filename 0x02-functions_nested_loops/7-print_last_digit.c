#include <stdio.h>
#include <stdlib.h>

/**
 *_putchar - puts character
 *
 *Return: 0 just prints
 */
void _putchar(void);

/**
 *print_last_digit - prints last digit of integer
 *&i - integer param
 *
 *Return: last digit
 */
int print_last_digit(int i)
{
	int dgt = abs(i % 10);
	return (dgt);
}
