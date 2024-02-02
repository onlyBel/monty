#include "monty.h"

/**
 *create_node_stack - createnode stack.
 *@stack: A pointr totop & bottom stack.
 *Return: EXIT SUCCESS.
 */
int create_node_stack(stack_t **stack)
{
	stack_t *p;

	p = malloc(sizeof(stack_t));
	if (p == NULL)
		stderr_malloc();
	p->n = STACK;
	p->prev = NULL;
	p->next = NULL;

	*stack = p;

	return (EXIT_SUCCESS);
}
/**
 *free_node_stack - Freestack_t stack.
 *@stack: A pointer.
 */
void free_node_stack(stack_t **stack)
{
	stack_t *temp_node = *stack;

	while (*stack)
	{
		temp_node = (*stack)->next;
		free(*stack);
		*stack = temp_node;
	}
}
/**
 *check_opcode - checkif STACK or QUEUE.
 *@stack: A pointeroftop and bottom stack.
 *Return: value ofb Stack or Queue.
 */
int check_opcode(stack_t *stack)
{
	int ret_val = 2;

	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (ret_val);
}
