#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<stdio.h>
#include "stack.c"
#define MAX 5

typedef int type;
//typedef struct
//{
//  int top;
//  type elements[MAX];
//}Stack;

void createStack(Stack *s);
int push(Stack *s, type value);
type pop(Stack *s);
//default peeking for the last element
type peekNorm(Stack*s);
type peek(Stack*s, int index_peeking);
int isStackFull(Stack s);
int isStackEmpety(Stack s);
int stackLen(Stack *s);
int stackWithout(Stack *s, int index, type*cop);



#endif // STACK_H_INCLUDED
