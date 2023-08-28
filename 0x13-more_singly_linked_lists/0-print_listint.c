#include "lists.h"

/**
 * print_listint - Prints the integer values of a linked list.
 * @h: A pointer to the first node of the linked list.
 * 
 * This function traverses through the given linked list starting from
 * the node pointed to by @h. It prints the integer value stored in each
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
    size_t i = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}
