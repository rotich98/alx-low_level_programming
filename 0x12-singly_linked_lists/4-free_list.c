#include "lists.h"
/**
 * free_list - frees list_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *first_node;

	while (head != NULL)
	{
		first_node = head;

		head = head->next;

		free(first_node->str);

			free(first_node);

	}
}
