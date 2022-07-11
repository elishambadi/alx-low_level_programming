#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	printf("%s, %c, %d", s, b, n);
	return (s);
}
