#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */
int main(void)
{
	char i = '0';
	int tmp = 0;

	while (tmp < 10)
	{
		putchar(i);
		i++;
		tmp++;
	}
	putchar('$');
	return (0);
}
