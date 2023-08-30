#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (b < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		b++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
