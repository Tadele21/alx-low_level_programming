#include "lists.h"
/**
  * sum_listint - returns the total of all the data (n) of a listint linked list.
  * @head: pointer to first element of list.
  *
  * Return: total of ) if list is empty.
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
