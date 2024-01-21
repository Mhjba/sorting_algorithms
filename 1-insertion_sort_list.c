#include "sort.h"

/**
 * insertion_sort_list - function that insertion sort algorithm
 * for a doubly linked list.
 * @list: Dobule linked list.
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *swap, *temp;

	if (list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	while ((head = head->next))
	{
		swap = head;
		while ((swap->prev) && (swap->n < swap->prev->n))
		{
			temp = swap->prev;
			if (swap->next)
			swap->next->prev = temp;
			if (temp->prev)
			temp->prev->next = swap;
			else

			(*list = swap);
			temp->next = swap->next;
			swap->prev = temp->prev;
			swap->next = temp;
			temp->prev = swap;
			print_list(*list);
		}
	}
}

