#include "lists.h"

/**
 * @brief Prints the contents of a linked list.
 *
 * This function prints the strings and their corresponding lengths stored in the linked list pointed to by `h`.
 * If a string is NULL, it prints "(nil)" instead.
 *
 * @param h Pointer to the head of the linked list.
 * @return The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t nelem;

    nelem = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        nelem++;
    }
    return nelem;
}