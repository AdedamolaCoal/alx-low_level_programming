#include "main.h"
#include <string.h>

/**
 * *_strncat -> function to append some charx
 * @dest: first param
 * @src: second param
 * @n: third param
 * Retyrn: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, *src, n);
	return (dest);
}

