#include "lists.h"
/**
 * print_dlistint -function that prints all the elements of a dlistint_t list.
 *@h:header of linken list
 * Return:Return count that is the number of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0 ; h; count++, h = h->next)
		printf("%d\n", h->n);

	return (count);
}
