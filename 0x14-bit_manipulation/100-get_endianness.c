

#include "main.h"
/**
 * get_endianness - checks the endianness.
 * What is endianess?
 *
 * Attribute to check whether integers are represented by the MSB
 * stored at the lowest address(big endian) or at highest address
 * (little endian)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
