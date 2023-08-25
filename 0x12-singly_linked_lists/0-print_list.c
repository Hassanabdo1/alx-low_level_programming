#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * brief Prints the contents of a linked list.
 * Return: number of elements in the list.
 * 
 * If a string is NULL, it prints "(nil)" instead.
 * * Return: number of elements in the list.
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