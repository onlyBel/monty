#include "monty.h"

/**
 *pop_e - pop errmessage for empty stacks.
 *@line_number: line number.
 *Return: EXIT_FAILURE.
 */
void pop_e(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	free_globalvars();
	exit(EXIT_FAILURE);
}

/**
 *pint_e - pint errmessage for empty stacks.
 *@line_number: line number.
 *Return: EXIT_FAILURE.
 */
void pint_e(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	free_globalvars();
	exit(EXIT_FAILURE);
}

/**
 *op_e - math func errmessagess.
 *@line_number: line number.
 *@op: Operation whereerror occurred.
 *Return: EXIT_FAILURE.
 */
void op_e(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	free_globalvars();
	exit(EXIT_FAILURE);
}
/**
 *pchar_e - pchar errmsg for 0 stack & non-char value.
 *@line_number: line number.
 *@msg: errmessage to print.
 *Return: EXIT_FAILURE.
 */
void pchar_e(unsigned int line_number, char *msg)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, msg);
	free_globalvars();
	exit(EXIT_FAILURE);
}

/**
 *div_e - errfor div by 0.
 *@line_number: line number.
 *Return: EXIT_FAILURE.
 */
void div_e(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	free_globalvars();
	exit(EXIT_FAILURE);
}
