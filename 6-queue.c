#include "main.h"

/**
 * enqueue - adds an element at the end
 * @n: data to add
 */
void enqueue(int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		/* handle overflow */
	}
	new->n = n;
	if (!head) /* Empty Queue */
	{
		head = tail = new;
	}
	else if (head == tail) /* One element */
	{
		head->next = new;
		new->prev = head;
	}
	else /* More than one element */
	{
		tail->next = new;
		new->prev = tail;
	}
	tail = new;
}

/**
 * dequeue - remove an element in FIFO
 *
 * Return: data of element removed
 */
int dequeue(void)
{
	return (pop());
}
/**
 * print_queue - print in FIFO
 */

void print_queue(void)
{
	print_stack();
}
