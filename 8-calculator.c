#include "main.h"

/**
 * calculator - performs basic operation
 * Description:
 * performs one of +, -, *, / and %
 * with the top two elements
 *
 * @op: operation symbol
 * @opname: operation name
 * @line: line number
 */
void calculator(char op, char *opname,  int line)
{
	int res, a, b;

	if (!head || !head->next)
	{
		dprintf(2, "L%u: can't %s, stack too short\n", line, opname);
		quit = EXIT_FAILURE;
	}
	if (mode == STACK)
		a = head->n, b = head->next->n;
	else
		a = tail->n, b = tail->prev->n;
	switch (op)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = b - a;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = b / a;
		break;
	case '%':
		res = b % a;
		break;
	default:
		break;
	}
	if (mode == STACK)
		head->next->n = res, pop();
	else
		tail->prev->n = res, dequeue();
}
