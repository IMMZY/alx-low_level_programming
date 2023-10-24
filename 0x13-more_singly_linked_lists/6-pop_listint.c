#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *_tp;
	int _data;

	if (*head == NULL)
		return (0);

	_tp = *head;
	*head = _tp->next;
	_data = _tp->n;
	free(_tp);
	return (_data);
}
