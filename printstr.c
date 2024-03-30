#include "monty.h"

/**
 *print_string - function name to print string at the top of stack
 *@head: parameter for head of the stack
 *@counter: counts line number
 *Return: return nothing
 */
void print_string(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
