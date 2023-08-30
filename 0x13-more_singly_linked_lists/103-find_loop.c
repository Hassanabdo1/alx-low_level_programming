#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, null if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nod = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (nod && fast && fast->next)
	{
		fast = fast->next->next;
		nod = nod->next;
		if (fast == nod)
		{
			nod = head;
			while (nod != fast)
			{
				nod = nod->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
