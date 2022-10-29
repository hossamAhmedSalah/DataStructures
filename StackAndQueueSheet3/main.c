#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"
/**keeps track of the customers visiting a car workshop**/
/**
1. Add a New Customer. <the least priority among others>
2. Serve a customer. <display the data of the first arriving  customer then dismiss them from the system>
3. Display Customers Information. < prints on screen the data of the current waiting customers without serving them.>
4. Display Customers information in the “most-recent" Order.<"Display Customers in the most-recent Order" without serving them - should be done  by copying the data to a structure that reverses the order.>
5. Exit menu
**/
char name[50];
void addNewCustomer(Queue*q)
{
 Enqueue(q, 1);
}
void serveCustomer(Queue*q)
{
    Dequeue(q);
}

void displayWaitingList(Queue*q)
{

   while(!isQueueEmpty(*q))
   {
       Dequeue(q);

   }


}
void infoRecent(Queue*q, Stack*s)
{

}


int main()
{
    int option;

    Queue customerQueue; createQueue(&customerQueue);
    Stack custrev; createStack(&custrev);
    label:
    printf("1.Add New Customer\n2.Sever a customer\n3.Display customer information\n4.display Customers information \"most recent order\"\n5.Exit\n");
    scanf("%d",&option);


            switch(option)
    {
        case 1:
            addNewCustomer(&customerQueue);
            goto label;
            break;
        case 2:
            serveCustomer(&customerQueue);
            goto label;
            break;
        case 3:
            displayWaitingList(&customerQueue);
            goto label;
            break;
        case 4:
            infoRecent(&customerQueue, &custrev);
            goto label;
            break;
        case 5:
            exit(0);
            break;
        default:
            goto label;
    }


    return 0;
}
