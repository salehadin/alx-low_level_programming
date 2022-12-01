#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: Number 1
 * @m: Number 2.
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, comp;

	comp = (n ^ m);
	while (comp != 0)
	{
		i += comp & 1;
		comp = comp >> 1;
	}
	return (i);
}
