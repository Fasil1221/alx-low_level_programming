#include "main.h"
/**
 * swap_int - is a function that swaps the values of two integers.
 * @a: is an intger
 * @b: is also an integer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
