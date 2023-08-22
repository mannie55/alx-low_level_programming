#include "main.h"

/**
 * swap_int - function to swap two pointer to
 * an integer
 * @a: value
 * @b: value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
