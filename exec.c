#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *execute - function to execute opcode.
 *@stack: head linked list of stack
 *@counter: parameter for line_counter
 *@file: pointer to monty file
 *@content: parameter for line content
 *Return: return nothing.
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nothing},
		{"sub", f_sub},
		{"div", f_divide},
		{"mul", f_mul},
		{"mod", f_modlus},
		{"pchar", f_pchar},
		{"pstr", f_print_string},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{"queue", addqueue},
		{"stack", f_stack},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
