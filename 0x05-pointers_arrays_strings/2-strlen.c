#include "main.h"

/**
 * _strlen - Functions that returns the length of a string.
 * @str: this is the input string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int first;

	for (first = 0; s[first] != '\0' ; first++)
		;
	return (first);
}

