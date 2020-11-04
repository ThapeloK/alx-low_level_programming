#include "lists.h"

/**
 * listint_len - counts the number elements of a linked list
 * @h: a pointer to the head of a linked list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
