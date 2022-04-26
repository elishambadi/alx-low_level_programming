#include <stdio.h>
#include "main.h"

/**
 *print_triangle - print a triangle
 *@size: size of triangle
 */

void print_triangle(int size)
{
	int i = 1;
	int j = 0;
	int cnt = 1;

	while (cnt <= size)
	{
		i = cnt;

		while (i <= size - j)
		{
			_putchar(' ');
			i++;
		}

		j = 0;
		printf("j: %d ", j);

		while (j < size - i)
		{
			printf("Started the loop");
			_putchar('a');
			j++;
		}
		printf("%d", j);

		_putchar('\n');
		cnt++;
	}
}
