#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: argc
 *@argv: argv
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int argc1 __attribute__((unused)) = argc;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}

	return (0);
}
