#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void _putchar(char c);

/**
 *print - print int
 *@n: int to print
 *
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
 *print_times_table - print n multi table
 @n: int to make table for
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int prod;

	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				prod = i * j;
				print(prod);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			i++;
			j = 0;
			_putchar('\n');
		}
	}
}
