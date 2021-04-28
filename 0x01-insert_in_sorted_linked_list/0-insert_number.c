#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: head of the linked list
 * @number: number to insert into new node
 *
 * Return: newnode or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode = NULL;
	listint_t *current = NULL;
	int check = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = number;

	if (newnode->n < (*head)->n)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			if (newnode->n >= current->n && number < current->next->n)
			{
				newnode->next = current->next;
				current->next = newnode;
				check = 1;
				break;
			}
			current = current->next;
		}
		if (check == 0)
			current->next = newnode;
	}
	return (newnode);
}

