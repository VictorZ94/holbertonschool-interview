#include "search.h"

/**
 * linear_skip - Look for a specific value in a singly linked list.
 * @list: head or top of the list
 * @value: value to look for in the list
 *
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *pos, *min;

	if (!list)
		return (NULL);

	pos = list, min = list;
	while (pos && pos->next && (pos->n) < value)
	{
		min = pos;
		if (pos->express)
		{
			pos = pos->express;
			printf("Value checked at index [%lu] = [%d]\n",
					pos->index, pos->n);
		}
		else
			while (pos->next)
				pos = pos->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			min->index, pos->index);
	for (i = min->index;
			i <= (pos->index) && (min->n <= value);
			i++, min = min->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, min->n);
		if (min && (min->n) == value)
			return (min);
	}
	if (min)
		printf("Value checked at index [%lu] = [%d]\n", i, min->n);
	return (NULL);
}
