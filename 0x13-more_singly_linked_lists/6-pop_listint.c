#include "lists.h"

/**
 * pop_listint - pops head nod of list
 * @head: adress of pointer to first nod
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *nod;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	nod = (*head)->next;
	free(*head);
	*head = nod;

	return (j);
}
