#include <stdio.h>
#include <string.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-1-19 \n";

	fwrite(str, strlen(str), 1, stderr);

	return (1);
}
