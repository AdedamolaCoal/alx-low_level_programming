#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: This is the input string
 */

void puts_half(char *str)
{
	int index, last;

	index = 0;
	while (str[index] != '\0')
		index++;

	last = index / 2;

	if (index % 2 == 1)
		last++;
	while (last < index)
	{
		_putchar(str[last]);
		last++;
	}
	_putchar('\n');
}

