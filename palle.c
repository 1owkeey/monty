#include "monty.h"

/**
 * f_palle - this prints the stack
 * @head: the stack head
 * @counter: as in no used
 * Return: as in no return
*/

void f_palle (stack_t **head, unsigned int counter)
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
