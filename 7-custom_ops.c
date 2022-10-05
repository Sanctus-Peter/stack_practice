#include "main.h"

/**
 * swap - swaps the first two elements
 */
void swap(void)
{
	int temp;

	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", 1u);
		exit(EXIT_FAILURE);
	}
	if (mode == STACK)
	{
		temp = head->n;
		head->n = head->next->n;
		head->next->n = temp;
	}
	else
	{
		temp = tail->n;
		tail->n = tail->prev->n;
		tail->prev->n = temp;
	}
}
