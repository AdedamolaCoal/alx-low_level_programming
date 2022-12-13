#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase 10x.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char t;
	int u;

	for (t = 'a'; t <= 'z'; t++)
	{

		for (int u = 0; t <= 10; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
