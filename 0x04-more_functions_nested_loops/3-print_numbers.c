#include <stdio.h>

/**
 *print_numbers - print numbers 0 to 9
 */

void print_numbers(void)
{
	char i = '0';

	while (i < '10')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
