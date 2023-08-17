#include <stdio.h>
#include "main.h"

/**
 * _isdigit - the prototype
 * @c: the parameter
 * Return: returns 1 true 0 false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
