#include "lists.h"
/**
 * get_nodeint_at_index - finds & returns nth node from linked list
 * @head: head of linked list
 * @index: index of the node to be returned
 * Return: the nth node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
