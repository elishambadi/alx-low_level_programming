#include <stdio.h>

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
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
