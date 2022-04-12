#include <stdio.h>
#include <stdlib.h>

void _putchar(char c);

void print(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}
/**
 *print_last_digit - prints last digit of integer
 *@i: integer param
 *
 *Return: last digit
 */
int print_last_digit(int i)
{
	int c = abs(i % 10);
	print(c);
	return (c);
}
