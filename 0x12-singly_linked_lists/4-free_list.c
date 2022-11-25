#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *t;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
