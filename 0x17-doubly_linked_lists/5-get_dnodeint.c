#include "lists.h"

/**
 * get_dnodeint_at_index -Returns the nth node of a dlistint_t linked list.
 *@head:Pointer to head of linken list
 *@index: node index to return
 * Return: Value about number of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;

	tmp = head;
	for (count = 0; tmp && count < index ; tmp = tmp->next, count++)
		;
	return (tmp);
}
