#include "lists.h"

/**
 * find_listint_loop - check if a single linked list has a loop
 * @head: pointer to the head
 *
 * Return: Pointer where loop is.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (!head)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare->next && hare->next->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
