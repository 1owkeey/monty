#include "monty.h"
/**
 * f_pop - this prints the top
 * @head: as in stack head
 * @counter: the line_number
 * Return:as in no return
*/

void f_popp(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
