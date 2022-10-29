#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef char sType;
typedef struct {
    int top;
    sType elements[MAX];
    char* name[MAX];
}Stack;
void createStack(Stack* s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
int lenStack(Stack s);
void push(Stack* s, sType element);
sType pop(Stack*s);
sType peek(Stack*s, int index);


#endif // STACK_H_INCLUDED
