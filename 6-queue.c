#include "main.h"

/**
 * enqueue - adds an element
 * @n: data to add
 */
void enqueue(int n)
{
	push(n);
}

/**
 * dequeue - remove an element in FIFO
 *
 * Return: data of element removed
 */
int dequeue(void)
{
	int res;
	stack_t *temp = tail;

	if (!tail)
	{
		/* handle underflow */
	}
	res = tail->n;
	if (head == tail)
		head = 0;
	else
		tail->prev->next = 0;
	tail = tail->prev;
	free(temp);

	return (res);
}
/**
 * print_queue - print in FIFO
 */

void print_queue(void)
{
	stack_t *temp = tail;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}

}
