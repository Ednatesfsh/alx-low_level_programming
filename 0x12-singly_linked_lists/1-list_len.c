#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}

	return (b);
}
