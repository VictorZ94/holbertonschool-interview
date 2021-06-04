#include "lists.h"

/**
 * is_palindrome - check whether a liked list is palindrome or not.
 * @head: head of the linked list
 *
 * Return: 1 on success, otherwise 0.
 */
int is_palindrome(listint_t **head)
{
	int *array1, *reversed_array;
	listint_t *temp;
	int iter;
	size_t flag;

	temp = *head;
	array1 = malloc(sizeof(int) * list_len(temp));
	reversed_array = malloc(sizeof(int) * list_len(temp));
	if (!array1 || !reversed_array)
		return (0);
	iter = 0;
	temp = *head;
	while (temp)
	{
		array1[iter] = temp->n;
		reversed_array[iter] = temp->n;
		temp = temp->next;
		iter++;
	}
	reverse_array(reversed_array, iter);
	flag = check_array_palindrome(array1, reversed_array, iter);
	free(array1);
	free(reversed_array);
	return (flag);
}


/**
 * list_len - print amount of nodes
 * @h: structure liked list
 *
 * Description: singly linked list node structure
 * for Holberton project
 *
 * Return: amount nodes
 */
size_t list_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}

/**
 * reverse_array - reverse an array
 * @a: Argument pointer to int
 * @n: length of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int j, z;

	n--;
	j = 0;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	}
}

/**
 * check_array_palindrome - check if array and reversed array are equals.
 * @array1: normal array
 * @array2: reversed array
 * @len_array: lenght of the array
 *
 * Return: 1 on success, otherwise 0
 */
size_t check_array_palindrome(int *array1, int *array2, int len_array)
{
	int i;

	for (i = 0; i < len_array; i++)
	{
		if (array1[i] != array2[i])
			return (0);
	}
	return (1);
}
