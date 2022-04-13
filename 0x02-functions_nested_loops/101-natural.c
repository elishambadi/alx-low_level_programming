#include <stdio.h>

/**
 *main - print sum of multiples of 3 and 5
 *Return: 0 to terminate program
 */
int main(void)
{
	int n = 1024;
	int i = 0;
	int sum = 0;

	while (i < n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
