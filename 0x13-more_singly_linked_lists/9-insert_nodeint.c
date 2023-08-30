#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nod at given index
 * @head: address of pointer to the first node
 * @idx: index to insert the nod node is added
 * @n: n value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nod;
	listint_t *nod_tmp = *head;

	nod = malloc(sizeof(listint_t));
	if (!nod || !head)
		return (NULL);

	nod->n = n;
	nod->next = NULL;

	if (idx == 0)
	{
		nod->next = *head;
		*head = nod;
		return (nod);
	}

	for (i = 0; nod_tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nod->next = nod_tmp->next;
			nod_tmp->next = nod;
			return (nod);
		}
		else
			nod_tmp = nod_tmp->next;
	}

	return (NULL);
}
