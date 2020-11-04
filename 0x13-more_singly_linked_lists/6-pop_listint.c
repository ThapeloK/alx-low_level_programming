#include "lists.h"

/**
 * pop_listint - deletes the first node and returns its data
 * @head: reference pointer to head
 * Return: data from deleted list
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (data);
}
