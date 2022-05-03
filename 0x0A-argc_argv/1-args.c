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
	char *argv1 __attribute__((unused)) = *argv;
	printf("%d\n", argc);
	return (0);
}
