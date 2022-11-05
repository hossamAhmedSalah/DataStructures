#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
typedef char lType;
typedef struct node{
    lType element;
    struct node *next;
}Node;
typedef struct{
    Node *head;
    int size;
    int all_size;
}List;
void createList(List*l, int allowed_size);
int isListEmpty(List*l);
int isListFull(List*l);
void insert(List*l, int index, lType value);
lType retrieve(List*l, int index);
void printList(List*l);


#endif // LINKEDLIST_H_INCLUDED
