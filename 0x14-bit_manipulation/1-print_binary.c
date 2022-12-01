#include "main.h"
/**
 * print_binary - print binary .
 * @n: pointer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int pos_exp = 1;

	for (; pos_exp < n; pos_exp <<= 1)
	{
		if (pos_exp > pos_exp << 1)
			break;
	}
	if (n != 0 && pos_exp > n)
		pos_exp >>= 1;
	for (; pos_exp > 0; pos_exp >>= 1)
	{
		if (n & pos_exp)
			putchar('1');
		else
			putchar('0');
	}
}
