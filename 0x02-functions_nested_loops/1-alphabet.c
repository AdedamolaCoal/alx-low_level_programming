#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
