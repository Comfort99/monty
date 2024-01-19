#include "monty.h"

/**
* is_comment - checks the tokens if it starts with #"
* Return: 0 or 1
*/
int is_comment(void)
{
	if (
		commands->tokens &&
		commands->tokens[0] &&
		commands->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
