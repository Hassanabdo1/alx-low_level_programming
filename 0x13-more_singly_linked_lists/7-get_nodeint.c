#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: pointer to first node
 * @index: index of the node to get
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nod = head;

	while (nod && i < index)
	{
		nod = nod->next;
		i++;
	}

	return (nod ? nod : NULL);
}
