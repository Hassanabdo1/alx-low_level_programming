#include "lists.h"

/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to the first new node
 * @n: value for new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node->next)
		node = node->next;

	node->next = new_node;

	return (new_node);
}
