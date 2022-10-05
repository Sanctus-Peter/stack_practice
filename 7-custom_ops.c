#include "main.h"

/**
 * swap - swaps the first two elements
 */
void swap(void)
{
	int first, second;

	if (!global.head || !global.head->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", 1u);
		global.quit = EXIT_FAILURE;
		return;
	}
	first = pop();
	second = pop();
	push(first);
	push(second);
}
