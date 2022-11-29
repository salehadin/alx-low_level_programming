#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
