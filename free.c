#include "monty.h"

/**
 *free_dlistint - freesdlistint_t list.
 *@stack: pointer to first elementof list.
 *Return: no return
 */
void free_dlistint(stack_t *stack)
{
	stack_t *aux = NULL;
	stack_t *temp = NULL;

	temp = stack;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	stack = NULL;
}

/**
 *free_globalvars - freedlistint_t list.
 *
 *Return: no return
 */
void free_globalvars(void)
{
	fclose(globalvar.fd);
	free(globalvar.line_buf);
}
