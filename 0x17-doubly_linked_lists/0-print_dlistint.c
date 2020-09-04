#include "lists.h"
/**
 * print_dlistint -
 *
 * Return: 
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	for(count = 0 ; h; count++, h=h->next )
		printf("%d\n", h->n);
	
	return (count);
}