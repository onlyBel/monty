#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 *pint - printtop data
 *@stack: stack by main
 *@line_cnt: ammount of lines
 *
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}7
