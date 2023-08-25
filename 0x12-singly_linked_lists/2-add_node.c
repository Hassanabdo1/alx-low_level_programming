#include "list_s.h"

/**
 * @brief Adds a new node with the given string to the beginning of the linked list.
 * @param head Pointer to a pointer to the head of the list.
 * @param str String to be stored in the new node.
 * @return Pointer to the new head of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    size_t n;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);

    for (n = 0; str[n]; n++);

    new_node->len = n;
    new_node->next = *head;
    *head = new_node;

    return *head;
}
