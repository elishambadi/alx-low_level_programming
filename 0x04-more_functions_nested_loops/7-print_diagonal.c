#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - print a line
 *@n: line lenghth int
 */

void print_diagonal(int n)
{
	int i = 0;
	int cnt = 0;
	
	while (i < n)
	{
		while (cnt < i)
		{
			_putchar(' ');
			cnt++;
		}
		cnt = 0;
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
