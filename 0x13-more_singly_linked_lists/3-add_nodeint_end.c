#include "lists.h"
/**
 * c_node - creates a new node
 * @n: int
 * Return: address memory node
 */
listint_t *c_node(const int n)
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
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: Double pointer.
  * @n: int.
  * Return: address memory node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);
	node_end = c_node(n);
	if (*head == NULL)
	{
		*head = node_end;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node_end;
	return (*head);
}
