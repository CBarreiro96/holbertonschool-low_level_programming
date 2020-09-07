#include "lists.h"

/**
 * dlistint_len -returns the number of elements in a linked dlistint_t list.
 *@h: Header of linken list
 * Return:Return numbers of element ina linkend list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0 ; h; count++, h = h->next)
		;

	return (count);
}
