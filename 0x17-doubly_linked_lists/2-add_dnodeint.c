#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that add a new  node at beginning
 * @head: dlistint_t double pointer
 * @n: value for the new node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new = malloc((sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->next = (*head);
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
