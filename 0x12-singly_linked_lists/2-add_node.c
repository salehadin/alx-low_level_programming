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
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: Double pointer.
  * @str: string.
  * Return: node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
