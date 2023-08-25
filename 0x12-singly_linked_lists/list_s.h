#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @file lists.h
 * @brief This file contains the definition of a linked list structure and related functions for string manipulation.
 */

/**
 * @struct list_s
 * @brief Structure representing a node in the linked list.
 */
typedef struct list_s
{
    char *str;               /**< Pointer to the string data */
    unsigned int len;        /**< Length of the string */
    struct list_s *next;     /**< Pointer to the next node */
} list_t;

/**
 * @brief Prints the strings stored in the linked list.
 * @param h Pointer to the head of the list.
 * @return The number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * @brief Counts the number of nodes in the linked list.
 * @param h Pointer to the head of the list.
 * @return The number of nodes in the list.
 */
size_t list_len(const list_t *h);

/**
 * @brief Adds a new node with the given string to the beginning of the list.
 * @param head Pointer to a pointer to the head of the list.
 * @param str String to be stored in the new node.
 * @return Pointer to the new head of the list.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * @brief Adds a new node with the given string to the end of the list.
 * @param head Pointer to a pointer to the head of the list.
 * @param str String to be stored in the new node.
 * @return Pointer to the head of the list.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * @brief Frees the memory used by the linked list.
 * @param head Pointer to the head of the list.
 */
void free_list(list_t *head);

#endif
