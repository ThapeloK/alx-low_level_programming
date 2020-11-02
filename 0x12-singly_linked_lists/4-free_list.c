#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees linked list of all allocated memory
 * @head: Beginning of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
