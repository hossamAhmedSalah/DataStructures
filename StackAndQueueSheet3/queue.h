#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
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
    info customer[MAXQ];
}Queue;
void createQueue(Queue*q);
int isQueueEmpty(Queue q);
int isQueueFull(Queue q);
int lenQueue(Queue q);
int Enqueue(Queue*q, qType element);
qType Dequeue(Queue*q);
void TraverseQueue(Queue*q, void(*f)(qType*));


#endif // QUEUE_H_INCLUDED
