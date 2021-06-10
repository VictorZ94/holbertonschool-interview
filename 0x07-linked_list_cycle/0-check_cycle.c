#include "lists.h"

/**
 * check_cycle - check if a singly linked list has a cycle in it.
 * @list: pointer to list to be checked
 * Return: on success return 1, Otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *hare, *tortoise;

	hare = list;
	tortoise = list;
	while (hare->next->next && tortoise->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
			return (1);
	}
	return (0);
}
