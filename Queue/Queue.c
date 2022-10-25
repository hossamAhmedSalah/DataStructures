#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef int type;
typedef struct
{
    int head;
    int tail;
    int size; // the number of elements occupiated
    type elements[MAX];
}Queue;
void createQueue(Queue*q)
{
    q->size = 0;
    q->head = 0;
    q->tail = MAX-1;

}
int isQueueEmpty(Queue*q)
{
    return q->size == 0;
}
int isQueueFull(Queue*q)
{
    return q->size == MAX;
}
int Enqueue(Queue*q, type element)
{
    if(!isQueueFull(q))
    {
        q->tail = (q->tail+1)%MAX;
        q->elements[q->tail] = element;
        q->size++;
        return 1;
    }
    return 0;
}
type Dequeue(Queue*q)
{
   if(!isQueueEmpty(q))
   {
    type ret = q->elements[q->head];
    q->head = (q->head+1)%MAX;
    q->size--;
    return ret;
   }

}
void TraverseQueue(Queue*q, void(*f)(type*))
{
    int i, siz;
    for(i=q->head,siz=0; siz<q->size; siz++)
    {
        (*f)(&q->elements[i]);
        i = (i+1)%MAX;
    }
}
