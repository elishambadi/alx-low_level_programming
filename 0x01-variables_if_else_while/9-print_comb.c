#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate programme
 *
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		i = (char) i;
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
