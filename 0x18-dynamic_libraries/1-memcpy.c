#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
	printf("%s, %s, %d", dest, src, n);
	return (dest);
}
