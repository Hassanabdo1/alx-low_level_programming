#include <stdlib.h>
#include "lists.h"

/**
 * @brief Computes the length of a linked list.
 *
 * This function counts the number of nodes in the linked list pointed to by `h`.
 *
 * @h: Pointer to the head of the linked list.
 * Return The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t number_of_nodes;

    number_of_nodes = 0;
    while (h != NULL)
    {
        h = h->next;
        number_of_nodes++;
    }
    return number_of_nodes;
}