#include <stdio.h>

/**
 *main - do fizz buzz test
 *
 *Return: 0 to terminate program
 */

int main(void)
{
	int i = 2;

	printf("1");
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	}

	printf("\n");
	return (0);
}
