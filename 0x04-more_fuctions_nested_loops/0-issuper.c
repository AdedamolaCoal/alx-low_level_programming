#include "main.h"

/**
 * _issuper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _issuper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
	return (0);
}

