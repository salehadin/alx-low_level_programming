#include "main.h"
/**
 * set_bit - returns the value of a bit at a given index.
 * @n: pointer
 * @index: index.
 *
 * Return: index or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pos_exp = 1, i;

	for (i = 0; i < index; i++, pos_exp <<= 1)
	{
		if (pos_exp > pos_exp << 1)
			return (-1);
	}
	*n |= pos_exp;
	return (1);
}
