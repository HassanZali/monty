#include "monty.h"
#include <stdio.h>

/**
 *freestack - function to free a doubly linked list
 *@head: head of the given stack
 */
void freestack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
