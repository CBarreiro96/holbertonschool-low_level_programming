#include "lists.h"
/**
 * add_dnodeint -Write a function that adds a new node
 *@head: Variable type of struct
 *@n: Variable type of const type of integer
 *Return: Return of adrres about varible
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
