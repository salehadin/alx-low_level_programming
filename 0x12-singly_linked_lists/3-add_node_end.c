#include "lists.h"
#include <string.h>
/**
  * str_len - size de un string
  * @s: string
  * Return:len
  */
int str_len(const char *s)
{
	int len = 0;

	while (s[len++])
		continue;
	return (len - 1);
}
/**
 * c_node - creates a new node
 * @s: string
 * Return:node
 */
list_t *c_node(const char *s)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(s);
	n_node->len = str_len(s);
	n_node->next = NULL;
	return (n_node);
}
/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: Double pointer.
  * @str: string.
  * Return: node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *tmp = *head;

	if (head == NULL)
		return (NULL);
	node_end = c_node(str);
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
