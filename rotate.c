#include "monty.h"
#include <stdio.h>

/**
 *f_rotl - function that rotates the stack top
 *@head: stack head
 *@counter: counts line number
 *Return: return nothing
 */
void f_rotl(stack_t **head, __attribute__ ((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
