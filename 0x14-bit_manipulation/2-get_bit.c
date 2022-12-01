#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: pointer
 * @index: index.
 *
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long pos_exp = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (pos_exp > pos_exp << 1)
			return (-1);
		pos_exp <<= 1;
	}
	if ((pos_exp & n) > 0)
		return (1);
	else
		return (0);
}
