#include "main.h"

/**
 * _strcpy - Copies the content of one of another variable
 * @dest: This is dest
 * @src: This is the copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

