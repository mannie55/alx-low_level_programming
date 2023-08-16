#include <stdio.h>
#include "main.h"

/**
 * _islower - checks whether character islower or
 * uppercase
 * @c: the parameter
 * Return: this function returns 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
