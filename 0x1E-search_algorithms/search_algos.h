#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

/**
 * struct listint_s - Singly linked list node structure.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 *
 * Description:
 * This structure defines a node for a singly linked list. It contains an
 * integer value, an index indicating its position in the list, and a
 * pointer to the next node in the list.
 */
typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

/* Function prototypes for various search algorithms */

/**
 * struct skiplist_s - Singly linked list node structure with an express lane.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 * @express: Pointer to the next node in the express lane.
 *
 * Description:
 * This structure defines a node for a singly linked list with an express lane.
 * It contains an integer value, an index indicating its position in the list,
 * a pointer to the next node in the regular lane, and a pointer to the next
 * node in the express lane.
 */
typedef struct skiplist_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct skiplist_s *next;    /* Pointer to the next node. */
    struct skiplist_s *express; /* Pointer to the next node in the express lane. */
} skiplist_t;

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t a, size_t b);
int binary_search_index(int *array, size_t a, size_t b, int value);
int binary_search(int *array, size_t size, int value);
void free_skiplist(skiplist_t *list);

#endif /* _SEARCH_ALGOS_H_ */
