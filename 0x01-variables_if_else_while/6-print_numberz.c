#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */
int main(void)
{
	int i = '0';
	int tmp = 0;

	while (tmp < 10)
	{
		putchar(i);
		i++;
		tmp++;
	}
	putchar('\n');
	return (0);
}
