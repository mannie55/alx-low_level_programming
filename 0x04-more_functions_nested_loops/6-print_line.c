#include "main.h"

/**
 * print_line - this function prints line
 * @n: parameter
 * Return:  always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
