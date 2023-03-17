#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that print a double linked list
 * @h: dlistint_t pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
