#include "lists.h"

/**
 * list_len - returns then the number of elements in the list.
 * @h: singly linke list.
 * Return: number of elements int the list.
 */
size_t list_len(const list_t *h)
{
	size_t number of odes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes)
}
