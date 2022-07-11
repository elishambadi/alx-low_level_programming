#include <stdio.h>
char *_strncat(char *dest, char *src, int n)
{
	printf("%s, %s, %d", dest, src, n);
	return (dest);
}
