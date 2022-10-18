#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
   Stack s;
   int element;
   createStack(&s);
   //printf("is the stack empty: %d\n", isStackEmpety(s));
   push(&s, 1);
   push(&s, 2);
   push(&s, 3);
   push(&s, 4);
   push(&s, 5);
//   printf("is stack full %d\n",  isStackFull(s));
//   printf("peek the stack %d\n", peek(&s));
//   printf("is the stack empty: %d\n", isStackEmpety(s));
//   for(int i = 0; !isStackEmpety(s) ; i++)
//   {
//       printf("==========================\n%d \n",pop(&s));
//
//   }
//  printf("is the stack empty: %d\n", isStackEmpety(s));
 // printf("indexing peeking %d\n", peek(&s,0));
  //printf("the lenght of stack %d\n", stackLen(&s));
//  for(int i = 0; i< stackLen(&s); i++)
//  {
//      printf("stack element %d = %d\n", i, peek(&s,i));
//  }
    // printf("%x", stackWithout(&s, 1));
    type *ptr;
    stackWithout(&s, 0, ptr);
    for(int i = 0; i<=4; i++){
        printf("%d\n", *(ptr+i));
    }


    return 0;
}
