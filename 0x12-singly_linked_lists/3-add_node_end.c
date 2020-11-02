#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node to the end of linked list
 * @head: Beginning of the linked list
 * @str: The string to be added to the list_t list.
 *
 * Return: Pointer to a new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = temp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
