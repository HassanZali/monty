#include "monty.h"

/**
 *f_pall - function to prints the stack.
 *@head: parameter stack head
 *@counter: count nothing
 *Return: return nothing
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
