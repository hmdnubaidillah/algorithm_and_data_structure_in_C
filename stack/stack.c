#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 3

int stack[MAX];
int top = -1;

void push(int value);
bool isFull();
bool isEmpty();
void printStack();
void pop();
void peek();

int main(int argc, char **argv)
{

    push(1);
    push(2);
    push(3);
    peek();
    pop();
    peek();

    // print stack values
    printf("\n");
    printf("stack values\n");
    printStack();

    return 0;
}

void printStack()
{
    for (int i = top; i >= 0; i--)
    {
        if (stack[i] != 0)
        {
            printf("value : %d\n", stack[i]);
        }
    }
}

// print the top value of the stack
void peek()
{
    if (isEmpty())
    {
        printf("stack is empty\n");
        return;
    }

    printf("top of the stack : %d\n", stack[top]);
}

// delete top of the stack
void pop()
{
    if (isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }

    printf("value %d popped\n", stack[top]);

    // decrement the stack index
    top--;
}

// push to array
void push(int value)
{

    // check if the arr is full?
    if (isFull())
    {
        printf("stack overflow\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("value : %d pushed\n", value);
}

// check if stack is empty
bool isEmpty()
{
    return top == -1;
}

// check if stack is full
bool isFull()
{
    return top == MAX - 1;
}
