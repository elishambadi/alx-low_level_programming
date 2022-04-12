#include <stdio.h>

void print(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		printf("%d", n/10);

	putchar(n%10 + '0');
}

int main(void)
{
	int n = 1223123;
	print(n);
	return (0);
}
