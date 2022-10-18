#include <stdio.h>
#include <stdlib.h>
#include "stack.h"




int main()
{
   Stack s;
   char option; int element;
   createStack(&s);

   printf("(a) Read an element then Push it.\n(b) Pop an element then displays it.\n(c) Exit.\n ");
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
   case 'c':
       exit(0);

    default:
        goto label1;



   }
  }




}

