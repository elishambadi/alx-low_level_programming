#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
