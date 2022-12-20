#include "main.h"

/**
 * print_array - prints n elements of an array of integer.
 * @a: pointer to array.
 * @b: number of array elements.
 * Return: void.
 */

void print_array(int *a, int *b)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

