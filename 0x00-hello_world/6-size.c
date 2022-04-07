#include <stdio.h>

/**
 *main - does main stuffs 
 *
 * Return: 0 to terminate program
 */
int main(void){
	int int_1;
	char char_1;
	long long_1;
	long long long_long_1;
	float float_1;
	printf("Size of a char: %d bytes(s)\n", sizeof(char_1));
	printf("Size of an int: %d bytes(s)\n", sizeof(int_1));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long_1));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long_long_1));
	printf("Size of a float: %d bytes(s)\n", sizeof(float_1));
	return (0);
}
