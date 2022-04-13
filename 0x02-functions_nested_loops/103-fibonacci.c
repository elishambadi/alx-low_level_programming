#include <stdio.h>
/**
 *main - print fibo sequence where terms less tha 4_000_000
 *
 *Return: 0 to terminate
 */
int main(void)
{
	long int n1 = 1, n2 = 2, i;
	long int next = n1 + n2;
	long int sum = 0;

	sum += n2;

	while (next < 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}

	printf("%ld\n", sum);
	return (0);
}
