#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string
 * Return: Length.
 */

int _strlen(char *s)
{
	int first;

	for (first = 0; s[first] != '\0' ; first++)
		;
	return (first);
}

