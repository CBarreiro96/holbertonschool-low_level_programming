#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@h:head of linked list.
*Return:number of node.
*/
size_t print_list(const list_t *h)
{
	size_t Count;

	Count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			Count++;
		}
	}

	return (Count);
}
