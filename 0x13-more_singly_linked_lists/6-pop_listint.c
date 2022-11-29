#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Doble pointer
 * Return: value poped.
 */
int pop_listint(listint_t **head)
{
	int retval = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;
	return (retval);
}
