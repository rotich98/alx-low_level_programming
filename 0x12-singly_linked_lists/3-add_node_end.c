#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *new_end_node;
	list_t *first_node;

	new_end_node = malloc(sizeof(list_t));
	count = 0;
	if (new_end_node)
	{
		new_end_node->str = strdup(str);

		if (!new_end_node->str || !str)
		{
			free(new_end_node);
			return (NULL);
		}

		while (new_end_node->str[count])
			count++;

		new_end_node->next = NULL;
		new_end_node->len = count;

		if (!*head)
		{
			*head = new_end_node;
			return (new_end_node);
		}

		first_node = *head;

		while (first_node->next)
			first_node = first_node->next;

		first_node->next = new_end_node;
		return (new_end_node);
	}
	return (NULL);
}
