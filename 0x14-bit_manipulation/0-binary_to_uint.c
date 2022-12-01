#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer
 *
 * Return: Number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t unint = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '1')
			unint = (unint * 2) + 1;
		else if (*b == '0')
			unint *= 2;
		else
			return (0);
		b++;
	}
	return (unint);
}
