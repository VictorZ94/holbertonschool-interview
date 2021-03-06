#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);
	insert_node(&head, 9);
	insert_node(&head, 500);
	insert_node(&head, 1050);
	insert_node(&head, 500);
	insert_node(&head, -3);
	insert_node(&head, -27);
	insert_node(&head, -55);
	insert_node(&head, -0);
	insert_node(&head, -1);
	insert_node(&head, 1052);
	insert_node(&head, 89);
	insert_node(&head, 2001);
    print_listint(head);

    free_listint(head);

    return (0);
}

