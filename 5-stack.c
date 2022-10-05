#include "main.h"

/**
 * push - push an element into stack
 * @n: data to push
 */
void push(int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		/* handle error */
	}
	new->n = n;
	new->next = head;
	if (!head)
		tail = new;
	else
		head->prev = new;
	head = new;
}

/**
 * pop - pops an element from the stack
 * Return: the value removed
 */

int pop(void)
{
	int res;
	stack_t *temp = head;

	res = head->n;
	if (head != tail)
		head->next->prev = 0;
	else
		tail = 0;
	head = head->next;
	free(temp);
	return (res);
}

/**
 * print_stack - prints a stack in LIFO
 */

void print_stack(void)
{
	stack_t *temp = head;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

