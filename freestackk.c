#include "monty.h"

/**
* free_stack -as frees a doubly linked list
* @head: the head of the stack
*/

void free_stackk(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
