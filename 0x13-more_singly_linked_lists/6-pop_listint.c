#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (n);
}
