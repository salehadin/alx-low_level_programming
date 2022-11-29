#include "lists.h"
/**
 * create_node - creates a new node
 * @n: int
 * Return: address memory node
 */
listint_t *create_node(const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n =  n;
	n_node->next = NULL;
	return (n_node);
}
/**
 * insert_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @idx: is the index of the node
 * @n: value to insert.
 * Return: address memory node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *isrt_node, *tmp;
	unsigned int i;

	if (!head)
		return (NULL);
	isrt_node = create_node(n);
	if (!isrt_node)
		return (NULL);
	if (!idx)
	{
		isrt_node->next = *head;
		*head = isrt_node;
		return (isrt_node);
	}
	else
	{
		tmp = *head;
		for (i = 1; tmp; i++)
		{
			if (i == idx)
			{
				isrt_node->next = tmp->next;
				tmp->next = isrt_node;
				return (isrt_node);
			}
			tmp = tmp->next;
		}

	}
	return (NULL);
}
