#include <stdio.h>
#include "main.h"

/**
 *more_numbers - print numbers 10 times
 */

void more_numbers(void)
{
	int i = '0';
	int j = '0';
	int cnt = 0;

	while (cnt < 10)
	{
		while (i <= '1')
		{
			while (j <= '9')
			{
				if (i == '1' && j == '5')
				{
					break;
				}
				else
				{
					if (i != '0')
					{
						_putchar(i);
					}
					_putchar(j);
				}
				j++;
			}
			j = '0';
			i++;
		}
		_putchar('\n');
		cnt++;
		i = '0';
		j = '0';
	}
}
