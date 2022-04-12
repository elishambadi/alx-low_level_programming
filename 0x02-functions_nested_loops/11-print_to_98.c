#include <stdio.h>

void _putchar(char c);

/**
 *print - prints an integer
 *@n: integer to print
 *
 *Return: void
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

/**
 *print_to_98 - print numbers to 98 forward or backward
 *@n: starting integer
 *
 *Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
