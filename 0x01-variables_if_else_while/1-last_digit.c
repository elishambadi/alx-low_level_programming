#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 *main - main function 
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	int n;
	char last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n%10;

	if (last_digit > 0 && last_digit < 6)
	{
		printf("Last digit of %d is %c and is less than 6 and not 0", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %c and is 0", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %d is %c and is greater than 5", n, last_digit);
	}
	return (0);
}
