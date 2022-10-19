    #ifndef STACK_H_INCLUDED
    #define STACK_H_INCLUDED
    #include<stdio.h>
    #include "stack.c"
    #define MAX 10

    typedef int type;


    void createStack(Stack *s);
     void destoreyStack(Stack*s);
    int push(Stack *s, type value);
    type pop(Stack *s);
    //default peeking for the last element
    //see the last element added to the stack
    type peekNorm(Stack*s);
    //peek with a specific index reverse index as the stack is FILO
    type peek(Stack*s, int index_peeking);
    // 1==>Full 0==>not Full
    int isStackFull(Stack s);
    // 1==>Empty 0==>not Empty
    int isStackEmpety(Stack s);
    // return the length of the stack
    int stackLen(Stack *s);
    //not finished and have some issues
    int stackWithout(Stack *s, int index, type* cop);
    type* copyToArray(Stack*s);
    void copyInStack(Stack*s1, Stack*s2);
    int sizeInBytes(Stack *s);


    #endif // STACK_H_INCLUDED
