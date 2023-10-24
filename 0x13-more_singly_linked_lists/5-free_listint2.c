#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 * Return: Nothing
 **/

void free_listint2(listint_t **head)
{
	listint_t *_temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		_temp = (*head)->next;
		free(*head);
		*head = _temp;
	}
}
