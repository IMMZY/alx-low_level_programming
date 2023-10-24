#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of a listint_t list
 * @n: Nodes in the @listint_t
 * @head: The first node of list
 * Return: The address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head_ = malloc(sizeof(listint_t));

	if (new_head_ == NULL)
		return (NULL);

	new_head_->n = n;
	new_head_->next = *head;
	*head = new_head_;
	return (new_head_);
}
