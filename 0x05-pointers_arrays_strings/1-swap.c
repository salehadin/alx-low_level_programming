#include "main.h"
/**
 * swap_int - swaps the value of two intigers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
