#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t
 * @n: The element of the node to be added
 * @head: The head/first node of the list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head_;
	listint_t *lastNode;

	new_head_ = malloc(sizeof(listint_t));
	if (new_head_ == NULL)
		return (NULL);

	new_head_->n = n;
	new_head_->next = NULL;

	if (*head == NULL)
	{
		*head = new_head_;
		return (new_head_);
	}

	else
	{
		lastNode = *head;
		while (lastNode->next)
			lastNode = lastNode->next;
		lastNode->next = new_head_;
	}
	return (new_head_);
}
