#include <stdio.h>
#include <stdlib.h>
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
	add_nodeint_end(&head, 10);
	add_nodeint_end(&head, 20);
	add_nodeint_end(&head, 30);
	add_nodeint_end(&head, 40);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 40);
	add_nodeint_end(&head, 30);
	add_nodeint_end(&head, 20);
	add_nodeint_end(&head, 10);
	print_listint(head);

	if (is_palindrome(&head) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

	free_listint(head);

	return (0);
}
