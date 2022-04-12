#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void _putchar(char c);

void times_table(void)
{
	int i = 0;
	int j = 0;
	int prod;

	int one;
	int two;

	while (i <= 9){
		while (j <= 9)
		{
			prod = i * j;

			if (prod > 9){
				one = prod / 10;
				two = prod % 10;

				printf("%d", one);
				printf("%d ,", two);
			}
			else
			{
				one = prod;
				printf("%d ,", one);
			}

			j++;
		}
		i++;
		j = 0;
		printf("\n");
	}
}
