#include "main.h"

/**
 * pint_handler - handles pint operation
 * @s: pointer to stack
 * @l: line number
 */
void pint_handler(stack_t **s, unsigned int l)
{
	(void)s;

	if (!global.head)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", l);
		global.quit = EXIT_FAILURE;
		return;
	}
	printf("%d\n", global.head->n);
}

/**
 * temp_handler - handles mode change
 * @s: pointer to stack
 * @l: line number
 */
void temp_handler(stack_t **s, unsigned int l)
{
	(void)s;
	(void)l;
}
