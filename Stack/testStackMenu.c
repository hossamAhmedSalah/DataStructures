#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void printStack(Stack*s)
{
    for(int i = 0; i < stackLen(s); i++)
    {
        printf("%d\n", peek(s,i));
    }
}



int main()
{
   Stack s;
   char option; int element;
   createStack(&s);

   printf("(a) Read an element then Push it.\n(b) Pop an element then displays it.\n(l)size of the stack\n(p)print Stack\n(c) Exit.\n ");
   label1:
   scanf("%c",&option);
  while(1)
  {
      switch(option){
   case 'a':
       scanf("%d", &element);
       push(&s, element);
       goto label1;
      // break;
   case 'b':
       printf("%d", element);
        goto label1;

      // break;
   case 'l':
       printf("%d", stackLen(&s));
        goto label1;
  case 'p':
       printStack(&s);
        goto label1;


   case 'c':
       exit(0);


    default:
        goto label1;



   }
  }




}



