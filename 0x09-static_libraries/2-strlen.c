#include "main.h"

/**
 * _strlen - Functions that returns the length of a string.
 * @s: this is the input string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int o;

	for (o = 0; s[o] != '\0' ; o++)
		;
	return (o);
}

