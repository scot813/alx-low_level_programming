#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *str;
	const listint_t *ptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	str = head->next;
	ptr = (head->next)->next;

	while (ptr)
	{
		if (str == ptr)
		{
			str = head;
			while (str != ptr)
			{
				nodes++;
				str = str->next;
				ptr = ptr->next;
			}

			str = str->next;
			while (str != ptr)
			{
				nodes++;
				str = str->next;
			}

			return (nodes);
		}

		str = str->next;
		ptr = (ptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
