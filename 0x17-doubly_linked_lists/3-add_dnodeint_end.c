#include "lists.h"

/**
 * add_dnodeint_end -adds a new node at the end of a dlistint_t list.
 *@head: header
 *@n:number to add in the linken list
 * Return:return Number of linken list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (tmp && tmp->next)
		tmp = tmp->next;

	if (tmp)
	{
		 new->prev = tmp;
		 tmp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
