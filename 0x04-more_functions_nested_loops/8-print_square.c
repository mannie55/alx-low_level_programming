#include "main.h"

/**
 * print_square - this function prints square
 * @size: this is the size of the square
 * return: 0 always
 */

void print_square(int size)
{
	int count, hash;

	for (count = 0; count < size; count++)
	{
		for (hash = 0; hash < size; hash++)
		_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
