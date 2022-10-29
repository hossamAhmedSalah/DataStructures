#include<stdio.h>
#define MAXQ 100
typedef int qType;
typedef struct {
  char name[50];
  int id ;
}info;
typedef struct{
    int head;
    int tail;
    int size;
    qType elements [MAXQ];
    info customer [MAXQ];
}Queue;
void createQueue(Queue*q)
{
    q->size = 0;
    q->head = 0;
    q->tail = MAXQ-1;
}
int isQueueEmpty(Queue *q)
{
    return q->size == 0;
}
int isQueueFull(Queue *q)
{
    // need to be tested
    return q->size == MAXQ;
}
int lenQueue(Queue q)
{
    return q.size;
}
int Enqueue(Queue*q, qType element)
{
   if(!isQueueFull(q))
   {
        q->tail = (q->tail+1)%MAXQ;
        q->elements[q->tail] = element;
        //name and id
        printf("\nEnter the name: ");
        scanf("%s",&q->customer[q->tail].name);
        printf("\nEnter the ID: ");
        scanf("%d",& q->customer[q->tail].id);
        q->size ++;
        return 1;
   }
   else
   {
      return 0;
   }
}
qType Dequeue(Queue*q)
{
    if(!isQueueEmpty(q))
    {
        qType ret = q->elements[q->head];
        q->head = (q->head+1)%MAXQ;
        q->size--;
        printf("\ncustomer name: [%s] \t customer ID: [%d]\n",q->customer[q->head].name,q->customer[q->head].id);
        return ret;
    }
}
void TraverseQueue(Queue*q, void(*f)(qType*))
{
    for(int i = q->head, siz = 0; siz<q->size; siz++, (i+1)%MAXQ)
        (*f)(&q->elements[i]);

}
