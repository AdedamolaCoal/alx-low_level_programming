#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node at the end of a db lkedlist
 * @head: db pointer to the db linked list
 * @n: db linked list data
 * Return: new_node or end node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*heead = new;
	}

	new->prev = h;

	return (new);
}
