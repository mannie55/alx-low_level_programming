#include "main.h"

/**
 * more_numbers - this prints more numbers
 * Return: always 0
 */

void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
	for (i = 0; i < 15; i++)
		{
		if (i >= 10)
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		}
	_putchar('\n');
	}
}
