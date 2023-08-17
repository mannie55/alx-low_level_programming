#include <stdio.h>
#include "main.h"

/**
 * _isupper - the function prototype
 * @c: this is the parameter
 * Return: this function returns 1 if true 0 false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
