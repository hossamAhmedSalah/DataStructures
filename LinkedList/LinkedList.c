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
void createList(List*l, int allowed_size)
{
    l->head = NULL;
    l->head = 0;
    l->all_size = allowed_size;
}
int isListEmpty(List*l)
{
    return l->head == NULL;
}
int isListFull(List*l)
{
    return 0;
}
void insert(List*l, int index, lType value)
{

 if (index <= l->all_size)
 {
        Node *p = (Node*)malloc(sizeof(Node));
        p->element = value;
         if (index == 0)
         {
             p->next = l->head;
             l->head = p;
             l->size++;

         }
         else
         {
            int i = 0;

             for(Node*move = l->head; i < index-1; i++, move = move->next)
             {
                 p->next = move->next;
                 move->next = p;
                 l->size++;
             }
         }
 }

}
lType retrieve(List*l, int index)
{
    int i = 0; Node* move,*tmp;
    lType ret;
    if(index <= l->all_size)
    {
            if(index == 0)
        {
            ret = l->head->element;
            tmp = l->head;
            l->head = l->head->next;
            free(tmp);
            l->size --;
            return ret;

        }
        else
        {
            for(move = l->head; i<index-1; i++, move = move->next)
            {
                ret = move->next->element;
                tmp = move->next;
                move->next = tmp->next;
                free(tmp);
                l->size--;
            }
            return ret;
        }
    }
}
void printList(List*l)
{
    Node*move; int i = 0;
//    for(move = l->head; i<=l->size && i<l->all_size; i++,move = move->next)
//    {
//        printf("%d ", move->element);
//    }
    while(l->head != NULL)
    {
        printf("%d ", l->head->element);
        l->head = l->head->next;
    }
}

