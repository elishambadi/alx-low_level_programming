#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - main function
 *@argc: argc
 *@argv: argv
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int cents __attribute__((unused)) = atoi(argv[1]);
	int count = 0;

	printf("%d", argc);

	if (argc == 1)
	{
		printf("Error\n");
	}

	else if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		if (cents / 25 != 0)
		{
			count += cents / 25;
			cents = cents % 25;
		}
		if (cent	

	printf("%d\n", count);
	return (0);
}
