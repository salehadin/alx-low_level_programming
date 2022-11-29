#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * of a list_t list.
 * @h: head list.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
