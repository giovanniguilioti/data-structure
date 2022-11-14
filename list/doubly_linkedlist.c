#include "doubly_linkedlist.h"

int IsEmpty(struct node* head)
{
    if(head == NULL)
        return 1;

    return 0;
}

int ListSize(struct node* head)
{
    if(head == NULL)
        return 0;

    struct node* temp = head->next;

    int i = 1;
    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}