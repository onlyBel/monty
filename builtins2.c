#include "monty.h"

/**
 *pop - Add node tostack.
 *@stack: head.
 *@line_number: line number.
 *
 *Return: No return.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (stack == NULL)
	{
		free_dlistint(*stack);
		pop_e(line_number); }
		if (*stack == NULL)
		{
			free_dlistint(*stack);
			pop_e(line_number); }
			temp = *stack;
			while (temp->next != NULL)
			{
				temp = temp->next;
				i++;
				flag = 1;
			}
			temp2 = *stack;
			while (j < (i - 1))
			{
				temp2 = temp2->next;
				j++;
			}
			if (i == 0 && flag == 0)
			{
				free(*stack);
				*stack = NULL;
				return;
			}
			else
			{
				temp2->next = NULL;
				free(temp);
				temp = NULL;
				return;
			}
}
/**
 *add - adds thetop twoelements of stack.
 *@stack: head.
 *@line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (*stack == NULL || stack == NULL)
	{
		op_e(line_number, "add");
	}
	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		flag = 1;
	}
	temp2 = *stack;
	while (j < (i - 1))
	{
		temp2 = temp2->next;
		j++;
	}
	if (i == 0 && flag == 0)
		free_dlistint(*stack), op_e(line_number, "add");
	else
	{
		temp2->n = temp2->n + temp->n;
		temp2->next = NULL;
		free(temp);
		temp = NULL;
		return;
	}

}
/**
 *sub - subtracts topof stack from2nd top element ofstack.
 *@stack: head.
 *@line_number: line number.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (*stack == NULL || stack == NULL)
	{
		op_e(line_number, "sub");
	}
	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		flag = 1;
	}
	temp2 = *stack;
	while (j < (i - 1))
	{
		temp2 = temp2->next;
		j++;
	}
	if (i == 0 && flag == 0)
		free_dlistint(*stack), op_e(line_number, "sub");
	else
	{
		temp2->n = temp2->n - temp->n;
		temp2->next = NULL;
		free(temp);
		temp = NULL;
		return;
	}
}
/**
 *mul - Mul 2nd value from top ofstack_t by top value.
 *@stack: head.
 *@line_number: line number.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	int i = 0, j = 0, flag = 0;

	if (*stack == NULL || stack == NULL)
	{
		op_e(line_number, "mul");
		return;
	}

	temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		flag = 1;
	}
	temp2 = *stack;
	while (j < (i - 1))
	{
		temp2 = temp2->next;
		j++;
	}
	if (i == 0 && flag == 0)
		free_dlistint(*stack), op_e(line_number, "mul");
	else
	{
		temp2->n = temp2->n * temp->n;
		temp2->next = NULL;
		free(temp);
		temp = NULL;
		return;
	}

}
/**
 *pchar - Print char.
 *@stack: head.
 *@line_number: line number
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		pchar_e(line_number, "stack empty");
		return;
	}
	temp = (*stack);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->n < 0 || temp->n > 127)
	{
		pchar_e(line_number, "value out of range");
	}
	printf("%c\n", temp->n);
}

