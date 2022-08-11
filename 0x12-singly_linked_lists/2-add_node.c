#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new string or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int count;
	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	count = 0;

	if (new_node)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		while (new_node->str[count])
			count++;

		new_node->len = count;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	return (NULL);
}
