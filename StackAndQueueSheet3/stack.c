#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef char sType;
typedef struct {
    int top;
    sType elements[MAX];
    char* name[MAX];
}Stack;
void createStack(Stack* s)
{
    s->top = -1;
}
int isStackEmpty(Stack *s)
{
    return s->top == -1;
}
int isStackFull(Stack *s)
{
    return s->top == MAX-1;
}
int lenStack(Stack *s)
{
//   (!isStackEmpty(s))?  return s.top: return -1;
    return s->top;
}
void push(Stack* s, sType element)
{
    s->elements[++s->top] = element;

}
sType pop(Stack*s)
{
    return s->elements[s->top--];
}
sType peek(Stack*s, int index)
{
    if(!isStackEmpty(s)& index <lenStack(s))
    {
        return s->elements[s->top - index];
    }

}
