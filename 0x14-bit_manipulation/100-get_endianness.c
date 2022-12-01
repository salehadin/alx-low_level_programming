#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int var;

	return ((int) (((char *)&var)[0]));
}
