#include <stdio.h>
/**
 *main - print fobo sequence
 *
 *Return: 0 to terminate
 */
int main(void)
{
	long int n1 = 1, n2 = 2, i;
	long int next = n1 + n2;

	printf("%ld, %ld ,", n1, n2);

	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%ld\n", next);
		}
		else
		{
			printf("%ld ,", next);
		}
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	return (0);
}
