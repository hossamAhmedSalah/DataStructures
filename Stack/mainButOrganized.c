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
void printLastEelemnt(Stack* s)
{
    printf("first element entered in the stack is %d", peek(s, stackLen(s)-1));
}
void destorey(Stack* s)
{
    s->top = -1;
}
void copyUserStack(Stack*s, Stack*s2)
{
    if(!isStackEmpety(*s) & isStackEmpety(*s2))
    {
        for(int i = 0 ; i<stackLen(s); i++)
        {
            push(s2, peek(s, i));
        }
    }

}
int sizeBytesUser(Stack*s)
{
    return sizeof(type)*stackLen(s);
}
void printUserStack(Stack*s)
{
    for(int i = stackLen(s)-1; i>=0; i--)
    {
        printf("%d \n", pop(s));
    }
    //last in first print LIFP
}
void pushSomeElementsForTest(Stack*s)
{

   push(s, 1); //5
   push(s, 2); //4
   push(s, 3); //3
   push(s, 4); //2
   push(s, 5); //1
   push(s, 6); //0

}
void doSomePrintingForSizesAndCopying(Stack*s, Stack*s2)
{
   printf("Stack one length? %d\t Stack two length(Before) ? %d\n", stackLen(s), stackLen(s2));
   copyUserStack(s, s2);
   printf("Stack one length? %d\t Stack two length(After)? %d\n", stackLen(s), stackLen(s2));
   printf("Size of int %d  Bytes \n",sizeof(int));
   printf("Size in Bytes for stack s (%d Bytes)\tSize in Bytes for stack s2 (%d Bytes)\n",sizeBytesUser(s),sizeBytesUser(s2));

}
void stackMenu(Stack *s)
{
    char option; int element;
   printf("(a) Read an element then Push it.\n(b) Pop an element then displays it.\n(l)size of the stack\n(p)print Stack\n(c) Exit.\n ");
   label1:
   scanf("%c",&option);
  while(1)
  {
      switch(option){
   case 'a':
       scanf("%d", &element);
       push(s, element);
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
       printStack(s);
        goto label1;


   case 'c':
       exit(0);


    default:
        goto label1;



   }
  }


}
int main()
{
   Stack s,s2;

   createStack(&s); createStack(&s2);
   pushSomeElementsForTest(&s);
   doSomePrintingForSizesAndCopying(&s,&s2);

  printUserStack(&s);
  stackMenu(&s);


   //printf("%d\n%d", *ptr,*(ptr+1));
//



}

