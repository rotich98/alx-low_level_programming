#include "lists.h"

/**
 * listint_len - prints the number of elements in listint_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
