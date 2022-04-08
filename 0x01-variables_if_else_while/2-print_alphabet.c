#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */

int main(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i = 0;

	while (i < 26)
	{
		char b = alpha[i];

		printf("%c",b);
		i++;
	}
	printf("\n");
	return (0);
}
