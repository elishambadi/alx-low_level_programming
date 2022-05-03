#include <stdio.h>
char *_strncpy(char *dest, char *src, int n)
{
	printf("%s, %s, %d", dest, src, n);
	return (dest);
}
