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
	int count = 0;
	int cents __attribute__((unused))= 0;

	if (argc > 1)
	{
		cents = atoi(argv[1]);
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
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
		if (cents / 10 != 0)
		{
			count += cents / 10;
			cents = cents % 10;
		}
		if (cents / 5 != 0){
			count += cents / 5;
			cents = cents % 5;
		}
		if (cents / 2 != 0)
		{
			count += cents / 2;
			cents = cents % 2;
		}
		if (cents / 1 != 0)
		{
			count += cents / 1;
		}
	}	

	printf("%d\n", count);
	return (0);
}
