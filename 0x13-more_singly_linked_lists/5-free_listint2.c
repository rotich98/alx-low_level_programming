#include "lists.h"
/**
 * free_listint2 - frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new_head;

	if (head == NULL)
		return;

	new_head = *head;
	while (new_head)
	{
		new_head = new_head->next;
		free(*head);
		*head = new_head;
	}
	*head = NULL;
}
