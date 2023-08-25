#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: node to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	temp = head;
	while (temp)
	{
		temp = head->next;
		free(head->str);
		free(temp);
		head = temp;
	}
}
