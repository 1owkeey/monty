#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - acts as the doubly linked list representation of a stack (or queue)
 * @n: as integer
 * @prev: the points to the previous element of the stack (or queue)
 * @next: the points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s -this are variables -args, file, line content
 * @arg: as in value
 * @file: the pointer to monty file
 * @content: acts as the line content
 * @lifi: the flag change stack <-> queue
 * Description:this carries values through the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pushh(stack_t **head, unsigned int number);
void f_palle(stack_t **head, unsigned int number);
void f_print(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stackk(stack_t *head);
void f_popp(stack_t **head, unsigned int counter);
void f_swapp(stack_t **head, unsigned int counter);
void f_addd(stack_t **head, unsigned int counter);
void f_nope(stack_t **head, unsigned int counter);
void f_subs(stack_t **head, unsigned int counter);
void f_dive(stack_t **head, unsigned int counter);
void f_mult(stack_t **head, unsigned int counter);
void f_mode(stack_t **head, unsigned int counter);
void f_pcharr(stack_t **head, unsigned int counter);
void f_pstrr(stack_t **head, unsigned int counter);
void f_rotlr(stack_t **head, unsigned int counter);
void f_rotrl(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnodee(stack_t **head, int n);
void addqueuee(stack_t **head, int n);
void f_queuee(stack_t **head, unsigned int counter);
void f_stackk(stack_t **head, unsigned int counter);
#endif
