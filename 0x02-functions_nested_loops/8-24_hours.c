#include <stdio.h>

void _putchar(char c);

void jack_bauer(void)
{

	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	while (i <= '2')
	{
		if (i < '2')
		{
			while (j <= '9')
			{
				while ( k < '6')
				{
					while (l <= '9'){
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
						l++;
					}
					k++;
					l = '0';
				}
				j++;
				k = '0';
			}
			i++;
			j = '0';
		}

		if (i == '2'){
			while (j <= '3')
			{
				while ( k < '6')
				{
					while (l <= '9'){
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
						l++;
					}
					k++;
					l = '0';
				}
				j++;
				k = '0';
			}
			i++;
			j = '0';
		}
	}
}
