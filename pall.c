#include "monty.h"

/**
 * f_pall - print the stack
 * @head: head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
	}
}
