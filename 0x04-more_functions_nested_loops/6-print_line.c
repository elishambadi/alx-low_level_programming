#include <stdio.h>
#include "main.h"

/**
 *print_line - print a line
 *@n: line lenghth int
 */

void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}

	if (n != 0)
	{
		_putchar('\n');
	}
}
