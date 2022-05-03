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
	int argc1 __attribute__((unused)) = argc;
	int res = 0, i;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}

	return (0);
}
