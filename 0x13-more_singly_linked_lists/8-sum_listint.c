#include "lists.h"

/**
 * sum_listint - calculates sum of all data in a given linked list
 * @head: a pointer to the first element of the list
 * Return: sum of values 
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
