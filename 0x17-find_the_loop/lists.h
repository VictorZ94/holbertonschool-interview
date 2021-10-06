#ifndef LOOP_H
#define LOOP_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: value to be stored
 * @next: points to the next node
 *
 * Description: singly linked list node done structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* My own function */
size_t print_listint_safe(const listint_t *head);

/**
 * struct listdone_s - singly linked list
 * @node: node
 * @next: points to the next node
 *
 * Description: singly linked list node done structure
 * for Holberton project
 */
typedef struct listdone_s
{
	const struct listint_s *node;
	struct listdone_s *next;
} listdone_t;

/* Source code provided by Holberton */
size_t free_listint_safe(listint_t **h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *find_listint_loop(listint_t *head);
const listint_t *_find_in_list(listdone_t **done, const listint_t *node);
void _free_done(listdone_t *done);


#endif /* Find a loop */
