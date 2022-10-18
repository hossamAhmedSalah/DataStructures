#include<stdio.h>
#define MAX 5

typedef int type;
typedef struct
{
  int top;
  type elements[MAX];
}Stack;

void createStack(Stack *s)
{
    s->top = -1;
}
int isStackFull(Stack s)
{
    return s.top == MAX-1;
}
int isStackEmpety(Stack s)
{
    return s.top == -1;
}
int push(Stack *s, type value)
{

       if(!isStackFull(*s))
       {
           s->elements[++s->top] = value;
           return 1;
       }
       else
        return 0;


}
type pop(Stack *s)
{

       if(!isStackEmpety(*s))
       {
           return s->elements[s->top--];
       }
       else
           printf("THE STACK IS EMPTEY YOU CAN'T POP ANT THING\n");

}
type peek(Stack*s, int index_peeking)
{
     if(!isStackEmpety(*s))
     {
         return s->elements[s->top-index_peeking];
     }
     else
        printf("NO ELEMNTS TO PEEK\n");
}
type peekNorm(Stack*s)
{
    if(!isStackEmpety(*s))
     {
         return s->elements[s->top];
     }
     else
        printf("NO ELEMNTS TO PEEK\n");

}
int stackLen(Stack *s)
{
    return s->top + 1;
}
int stackWithout(Stack *s, int index, type* cop)
{
    //type copy[stackLen(s)];
//    type *copy;
    if(index>=stackLen(s))
    {
        return 0;
    }
    else{

        for(int i = 0; i <stackLen(s); i++){
            if(i != index)
            {
                *(cop+i) = peek(s, i); //peek(*s, stackLen(*s)-i); if noraml indexing was applyed here
            }
        }
    }
    return 1;
}

