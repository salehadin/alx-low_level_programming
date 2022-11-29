#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: is the index of the node
 * Return: address memory node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp = head;

	if (!head)
		return (0);
	for (i = 0; tmp; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
