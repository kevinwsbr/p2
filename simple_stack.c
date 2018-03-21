#include <stdio.h>

#define MAX_SIZE 100

typedef struct stack
{
    int current_size;
    int items[MAX_SIZE];
} stack;

stack* create_stack()
{
    stack *stack = malloc(sizeof(stack));
    stack->current_size = 0;
    return stack;
}

void push(stack *stack, int item)
{
    if(stack->current_size == MAX_SIZE)
    {
        printf("Stack Overflow, try to pop an element!\n");
    }
    else
    {
        stack->items[stack->current_size++] = item;
    }
}

int pop(stack *stack)
{
    if(is_empty(stack))
    {
        printf("Stack underflow, try to add an element!\n");
    }
    else
    {
        return stack->items[--stack->current_size];
    }
}

int peek(stack *stack)
{
    if(is_empty(stack))
    {
        printf("Stack underflow, try to add an element!\n");
    }
    else
    {
        return stack->items[stack->current_size-1];
    }
}

int is_empty(stack *stack)
{
    return stack->current_size == 0 ? 1 : 0;
}

int main()
{
    stack *stack = create_stack();
    push(stack, 3);
    push(stack, 7);
    push(stack, 8);
    printf("%d", peek(stack));
    pop(stack);
    return 0;
}