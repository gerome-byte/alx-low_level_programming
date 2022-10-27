#include"lists.h"

/**
 * free_list - frees a list.
 * @head: head pointer.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *ptr;
	size_t k = 0;

	ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}

