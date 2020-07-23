#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@h:head of linked list.
*Return:number of node.
*/
size_t print_list(const list_t *h)
{
	const list_t *Temporaly;
	size_t Count;

	Count = 0;
	Temporaly = h;

	while (Temporaly != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		Temporaly = Temporaly->next;
		Count++;
	}

	return (Count);
}
