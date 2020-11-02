#include "lists.h"

/**
 * list_len - Counts the length of a linked list
 * @h: pointer to the struct
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
