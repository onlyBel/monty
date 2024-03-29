#include "monty.h"

/**
 *stderr_usage - usage err..
 *Return: EXIT_FAILURE
 */
void stderr_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 *stderr_malloc - Prints malloc errmessages.
 *Return: EXIT_FAILURE.
 */
void stderr_malloc(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_globalvars();
	exit(EXIT_FAILURE);
}
/**
 *stderr_fopen - error of fopen.
 *@filename: type pointer.
 *Return: EXIT_FAILURE.
 */
void stderr_fopen(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
/**
 *stderr_int - err of int.
 *@line_number: type pointer.
 *Return: EXIT_FAILURE
 */
void stderr_int(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	free_globalvars();
	exit(EXIT_FAILURE);
}

/**
 *stderr_unknown - unknown errmessages.
 *@line_number: line number.
 *@token: type pointer char ofinstruction.
 *Return: EXIT_FAILURE.
 */
void stderr_unknown(char *token, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
	free_globalvars();
	exit(EXIT_FAILURE);
}
