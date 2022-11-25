#include "lists.h"
/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * @h: head list.
 *
 * Return: number of node.
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
