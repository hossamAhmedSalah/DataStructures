#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAX 10

typedef int type;
typedef struct
{
    int front;
    int rear;
    int size;
    type elements[MAX];
}Queue;
void createQueue(Queue*q);
int isQueueEmpty(Queue*q);
int isQueueFull(Queue*q);
int Enqueue(Queue*q, type element);
type Dequeue(Queue*q);


#endif // QUEUE_H_INCLUDED
