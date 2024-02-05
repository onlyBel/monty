#include "monty.h"
#include <stdlib.h>

/**
 *array_len - calculatesarray of a token.
 *Return: Lenght oftoken.
 */
unsigned int array_len(void)
{
	unsigned int token_len = 0;

	while (globalvar.token2[token_len])
		token_len++;
	return (token_len);
}
/**
 *tokerr - makeslast element ofinstructions aserror code.
 *@error_status: type int where erris saved as srt.
 */
void tokerr(int error_status)
{
	int token_len = 0, i = 0;
	char *exit_str = NULL;
	char *new_token = NULL;

	token_len = array_len();
	new_token = malloc(sizeof(char *) * (token_len + 2));
	if (!globalvar.token2)
	{
		stderr_malloc();
		return;
	}
	while (i < token_len)
	{
		new_token[i] = globalvar.token2[i];
		i++;
	}
	exit_str = get_int(error_status);
	if (!exit_str)
	{
		free(globalvar.token2);
		stderr_malloc();
		return;
	}
	free(globalvar.token2);
	globalvar.token2 = new_token;
}
