
#include "lists.h"

/**
 * sum_listint - returns sum of all deta
 * @head: pointer to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nod = head;

	while (nod)
	{
		sum += nod->n;
		nod = nod->next;
	}

	return (sum);
}
