#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 *
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
