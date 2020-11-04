#include "lists.h"

/**
 * print_listint - prints data part of a linked list
 * @h: pointer to the head of a linked list
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
