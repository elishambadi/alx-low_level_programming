#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 *
 */

int main(void)
{
	char i = '0';
	int j = 0;
	char a = 'a';

	while (j < 10)
	{
		putchar(i);
		i++;
		j++;
	}

	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
