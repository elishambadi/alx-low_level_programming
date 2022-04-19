#include <stdio.h>
#include "main.h"

/**
 *print_square - prints a square
 *@size: size of square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		j = 0;
		_putchar('\n');
		i++;
	}

	if (size == 0)
	{
		_putchar('\n');
	}
}
