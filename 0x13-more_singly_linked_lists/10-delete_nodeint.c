#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *_previous;
	listint_t *next;

	_previous = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && _previous != NULL; x++)
		{
			_previous = _previous->next;
		}
	}

	if (_previous == NULL || (_previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = _previous->next;

	if (index != 0)
	{
		_previous->next = next->next;
		free(next);
	}
	else
	{
		free(_previous);
		*head = next;
	}

	return (1);
}
