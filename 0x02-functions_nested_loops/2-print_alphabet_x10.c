#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase 10x.
 *
 * Return: 0
 */

void print_alphabet_x10(void);

{
	char t, u;

	for (u = 'a'; u <= 'z'; u++)
	{

		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
