#include "lists.h"
/**
 * add_dnodeint -
 *
 * Return: 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (current == NULL)
		new->next = NULL;
	else
	{
		while (current->prev)
			current = current->prev;

		current->prev = new;
		new->next = current;
	}
	*head = new;

	return (*head);
}
