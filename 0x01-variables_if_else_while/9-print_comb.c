#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate programme
 *
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return(0);
}
