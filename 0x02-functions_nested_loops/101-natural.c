#include <stdio.h>

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
