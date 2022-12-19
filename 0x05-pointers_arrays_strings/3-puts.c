#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line.
 * @str: This is my input string
 */

void _puts(char *str)
{
	int game;

	for (game = 0; str[game] != '\0'; game++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

