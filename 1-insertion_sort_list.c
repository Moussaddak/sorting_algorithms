#include "sort.h"
/**
 * insertion_sort_list - sorts a list of integers in ascending order
 * @list: doubly linked list of integer
 */
void insertion_sort_list(listint_t **list)
{
	int swap;
	listint_t *h = *list, *current, *nxt;

	if (!list)
		return;
	while (h)
	{
		current = h;
		nxt = h->next;
		if (!nxt)
			return;

		while (current && current->n > nxt->n)
		{
			swap = current->n;
			current->n = nxt->n;
			nxt->n = swap;
			nxt = current;
			current = current->prev;
			print_list(*list);
		}
		h = h->next;
	}
}
