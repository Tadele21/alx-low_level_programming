#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: pointer to head of const listint_t
  * Return: the number of nodes in h
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0; /* number of nodes printed */

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
