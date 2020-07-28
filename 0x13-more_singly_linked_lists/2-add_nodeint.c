#include "lists.h"
/**
 *add_nodeint-adds a new node at the beginning of a listint_t list.
 *@head:Double pointer to head node
 *@n:int value to store in new node
 *Return: Return new node or NULL if it is
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
/*Direction head to new*/
	*head = new;
	if (current == NULL)
		new->next = NULL;
	else
		new->next = current;
	return (new);
}
