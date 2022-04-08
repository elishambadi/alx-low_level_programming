#include <stdio.h>
#include <ctype.h>

/**
 *main - main function
 *
 *Return: 0 to terminate programme
 *
 */
int main(void)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}

	i = 0;

	while (i < 26)
	{
		putchar(toupper(alpha[i]));
		i++;
	}

	putchar('\n');
	return (0);
}
