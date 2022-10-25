#include <stdio.h>
#include <stdlib.h>
#include"Queue.h"
void print(type*e)
{
    printf("element is: %d\n",*e);
}
type sum = 0;

void sumi(type*e)
{
    sum+=*e;
    printf("\nsum %d\n", sum);
}
int main()
{
    Queue q ;
    createQueue(&q);
    Enqueue(&q,1);  Enqueue(&q,2);  Enqueue(&q,3);  Enqueue(&q,4);  Enqueue(&q,5);
    TraverseQueue(&q,&print);
     TraverseQueue(&q,&sumi);



    return 0;
}
