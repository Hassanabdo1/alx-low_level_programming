#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of pointer to first nod
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = nod;
		nod = *head;
		*head = next;
	}

	*head = nod;

	return (*head);
}
