#include "main.h"

/**
 * *_strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Retyrn: A pointer to the resulting dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

