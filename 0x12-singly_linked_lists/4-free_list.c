#include "list_s.h"

/**
 * @brief Frees the memory used by the linked list.
 * @param head Pointer to the head of the list.
 * Return: no return.
 * 
 */
void free_list(list_t *head)
{
    list_t *current_node;

    while ((current_node = head) != NULL)
    {
        head = head->next;
        free(current_node->str);
        free(current_node);
    }
}
