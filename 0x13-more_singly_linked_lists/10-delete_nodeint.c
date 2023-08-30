#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: address of pointer to the first node in the list
 * @index: index of node to delete
 *
 * Return: 1 on (Success), or -1 on (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nod);
		return (1);
	}

	while (i < index - 1)
	{
		if (!nod || !(nod->next))
			return (-1);
		nod = nod->next;
		i++;
	}


	current = nod->next;
	nod->next = current->next;
	free(current);

	return (1);
}
