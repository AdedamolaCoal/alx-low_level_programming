#include "lists.h"

/**
 * free_dlistint - function that frees a db linked list
 * @head: double pointer to ddlklist
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((aux = head) != NULL)
	{
		head = head->next;
		free(aux);
	}
}
