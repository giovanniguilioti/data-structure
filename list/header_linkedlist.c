#include "header_linkedlist.h"

int IsEmpty(struct node* head)
{
    if(head == NULL || head->next == NULL)
        return 1;

    return 0;
}

int ListSize(struct node* head)
{
    if(head == NULL || head->next == NULL)
        return 0;

    struct node* temp = head->next;

    int i = 0;
    while(temp->next != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}