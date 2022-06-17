#include "monty.h"
/**
 * print_reverse - prints from bottom to top
 * @stack: the pointer to the head
 * @line_number: the line number
 *
 * Return: void
 */
void push(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *new;
	new = malloc(sizeof(stack_t));
	if (*stack == NULL)
		push_error(17);
	
	new->n = line_number;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
	fprintf(stdout, "%d\n", (*stack)->line_number);
}
