#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t ptr_nodes = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		printf("[%d] %s\n", head->len,
		head->str != NULL ? head->str : "(nil)");
		head = head->next;
		ptr_nodes++;
	}
	return (ptr_nodes);
}
